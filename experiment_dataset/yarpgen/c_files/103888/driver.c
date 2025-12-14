#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
unsigned char var_6 = (unsigned char)62;
signed char var_8 = (signed char)30;
unsigned char var_9 = (unsigned char)27;
int zero = 0;
short var_11 = (short)-819;
long long int var_12 = -7252535523264328443LL;
unsigned char var_13 = (unsigned char)252;
long long int var_14 = -7600528887666034687LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
