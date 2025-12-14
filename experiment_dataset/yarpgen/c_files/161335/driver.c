#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 5939133475377664915LL;
int var_2 = 2082191231;
_Bool var_3 = (_Bool)1;
short var_4 = (short)4393;
unsigned long long int var_7 = 15845283497639481394ULL;
unsigned short var_9 = (unsigned short)6067;
unsigned short var_11 = (unsigned short)54683;
int var_15 = -93811593;
unsigned long long int var_16 = 7203323414038005776ULL;
int zero = 0;
unsigned long long int var_17 = 8600640595640961717ULL;
unsigned long long int var_18 = 14705810172577295412ULL;
unsigned int var_19 = 1802745626U;
short var_20 = (short)-2150;
unsigned char var_21 = (unsigned char)114;
unsigned char var_22 = (unsigned char)251;
unsigned char var_23 = (unsigned char)135;
int arr_4 [18] ;
int arr_6 [18] [18] [18] [18] ;
long long int arr_12 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 264416611;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 968091534 : 1422691421;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -6812343987880749436LL : -133970066682518691LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
