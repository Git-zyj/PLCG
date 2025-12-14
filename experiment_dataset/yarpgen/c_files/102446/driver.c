#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1076924168;
short var_1 = (short)5227;
unsigned char var_2 = (unsigned char)253;
unsigned short var_6 = (unsigned short)19977;
short var_9 = (short)14309;
int zero = 0;
unsigned short var_10 = (unsigned short)5307;
int var_11 = -424464362;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
