#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17762;
unsigned int var_2 = 3000683393U;
signed char var_3 = (signed char)-121;
int var_5 = 919640390;
unsigned long long int var_6 = 14950211828045913436ULL;
long long int var_7 = 7676285363456230080LL;
unsigned int var_8 = 259213300U;
unsigned long long int var_9 = 13856370877109273017ULL;
signed char var_10 = (signed char)8;
int var_11 = -580614347;
int zero = 0;
long long int var_13 = -7695268719231715015LL;
short var_14 = (short)-25867;
signed char var_15 = (signed char)-53;
short var_16 = (short)-8775;
unsigned char arr_0 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)119;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
