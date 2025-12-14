#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)202;
long long int var_2 = 1718919674753838654LL;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 4249443320U;
unsigned char var_15 = (unsigned char)191;
int zero = 0;
unsigned long long int var_16 = 1096482956988730806ULL;
unsigned char var_17 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
