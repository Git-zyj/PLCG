#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40533;
long long int var_3 = 3787767672438109751LL;
short var_6 = (short)-15505;
unsigned char var_8 = (unsigned char)226;
int var_9 = 1500723814;
long long int var_13 = -8531805814352651797LL;
signed char var_17 = (signed char)-106;
unsigned int var_18 = 2980726791U;
int zero = 0;
signed char var_19 = (signed char)112;
unsigned int var_20 = 3035910988U;
unsigned int var_21 = 1050927419U;
unsigned long long int var_22 = 5332259323177871887ULL;
int var_23 = -2123242454;
unsigned char var_24 = (unsigned char)112;
_Bool arr_4 [20] [20] [20] ;
unsigned int arr_5 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1104297720U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
