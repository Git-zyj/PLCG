#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 793760098;
int var_8 = 431677679;
signed char var_9 = (signed char)-30;
signed char var_10 = (signed char)-19;
unsigned int var_11 = 3316790850U;
unsigned short var_13 = (unsigned short)12502;
short var_14 = (short)-15058;
int var_17 = 1889395811;
int zero = 0;
int var_19 = 1073707545;
unsigned char var_20 = (unsigned char)180;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
