#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51766;
long long int var_3 = 6189425338211309668LL;
long long int var_10 = 5662045936792954430LL;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)39601;
unsigned long long int var_18 = 16876807570532148633ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)65;
void init() {
}

void checksum() {
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
