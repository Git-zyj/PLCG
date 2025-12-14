#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1910197615;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)187;
unsigned long long int var_7 = 551448555536726727ULL;
unsigned long long int var_11 = 5777888144990276236ULL;
unsigned long long int var_16 = 8558316064006335687ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)108;
signed char var_19 = (signed char)-56;
short arr_0 [25] ;
int arr_1 [25] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-15280;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1482112742;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-11671;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
