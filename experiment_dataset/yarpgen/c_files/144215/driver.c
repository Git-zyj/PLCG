#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 997392541;
_Bool var_1 = (_Bool)1;
int var_2 = -979626774;
signed char var_4 = (signed char)-118;
short var_8 = (short)-11448;
int var_9 = 840121681;
unsigned long long int var_11 = 11090381692497298558ULL;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 2693722934014792612LL;
unsigned short var_20 = (unsigned short)32800;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)194;
signed char var_23 = (signed char)-7;
unsigned long long int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 5509014892737532884ULL;
}

void checksum() {
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
