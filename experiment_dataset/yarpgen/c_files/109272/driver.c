#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2582021195223609476ULL;
unsigned short var_2 = (unsigned short)33777;
unsigned int var_4 = 3052502103U;
unsigned long long int var_5 = 12902435903113580468ULL;
unsigned long long int var_13 = 17855995213813952473ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)37707;
unsigned long long int var_16 = 12512991819608545744ULL;
long long int var_17 = 6851323921823771727LL;
long long int var_18 = -649227577195785740LL;
unsigned int arr_2 [21] ;
int arr_3 [21] ;
unsigned long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 261255429U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 810725163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 10086342907342061429ULL : 16923643426202540316ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
