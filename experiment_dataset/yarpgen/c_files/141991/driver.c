#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48263;
unsigned int var_10 = 1787854570U;
unsigned long long int var_13 = 9110458096531311583ULL;
int var_16 = -1720859161;
long long int var_17 = -3568381788880685146LL;
int zero = 0;
unsigned short var_18 = (unsigned short)39578;
unsigned long long int var_19 = 4005242707774690582ULL;
unsigned char var_20 = (unsigned char)150;
signed char var_21 = (signed char)83;
unsigned short arr_0 [20] ;
signed char arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)45154 : (unsigned short)57927;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)52;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
