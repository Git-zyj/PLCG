#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2872029555710187133LL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)11;
int var_7 = 202153377;
short var_8 = (short)9984;
unsigned short var_9 = (unsigned short)2563;
int zero = 0;
unsigned int var_10 = 2090473541U;
signed char var_11 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
