#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 238344931872495809ULL;
int var_2 = -1082922025;
signed char var_4 = (signed char)-77;
short var_6 = (short)9946;
short var_10 = (short)11503;
long long int var_12 = -8932872390449157051LL;
int zero = 0;
unsigned int var_14 = 3095547947U;
int var_15 = -571087835;
unsigned int var_16 = 2471934929U;
unsigned int var_17 = 416239203U;
long long int var_18 = 3360529211771943759LL;
unsigned char arr_1 [12] ;
unsigned char arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)151;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
