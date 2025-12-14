#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
int var_3 = 1388796865;
unsigned short var_6 = (unsigned short)14051;
unsigned long long int var_7 = 631400798058340121ULL;
unsigned short var_8 = (unsigned short)6515;
int var_9 = 1998836209;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_13 = -2065772344;
unsigned short var_14 = (unsigned short)47574;
unsigned char var_15 = (unsigned char)7;
unsigned short var_16 = (unsigned short)27480;
signed char var_17 = (signed char)113;
int var_18 = 18335872;
unsigned short var_19 = (unsigned short)40300;
long long int var_20 = 1136143610679945121LL;
signed char arr_0 [17] [17] ;
unsigned short arr_2 [21] ;
_Bool arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)20935;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
