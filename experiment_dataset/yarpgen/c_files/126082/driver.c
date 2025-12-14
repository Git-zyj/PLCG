#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-20791;
int var_5 = 484057003;
long long int var_7 = -5030131237829292405LL;
unsigned char var_8 = (unsigned char)66;
short var_11 = (short)16605;
int zero = 0;
unsigned long long int var_13 = 4390708746743748720ULL;
long long int var_14 = 5321544036397683886LL;
unsigned int var_15 = 2355741049U;
int var_16 = 1048122264;
unsigned char var_17 = (unsigned char)145;
unsigned long long int arr_3 [19] ;
int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 71397362342302981ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -53020644 : -395720137;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
