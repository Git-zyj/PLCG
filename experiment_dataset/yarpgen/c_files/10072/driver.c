#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
unsigned char var_1 = (unsigned char)182;
long long int var_3 = 1227617104123355708LL;
short var_5 = (short)-28680;
int var_7 = 360801729;
unsigned long long int var_9 = 2542096750362618975ULL;
unsigned char var_10 = (unsigned char)221;
unsigned long long int var_14 = 13467899372600366095ULL;
int zero = 0;
short var_17 = (short)13590;
long long int var_18 = 7109273924385398632LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)46;
unsigned long long int var_21 = 16422433981023864662ULL;
long long int var_22 = -2399034462461159514LL;
unsigned short arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)26704;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
