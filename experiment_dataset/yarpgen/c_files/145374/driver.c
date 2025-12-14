#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)21;
unsigned char var_6 = (unsigned char)23;
unsigned int var_16 = 2179253240U;
int zero = 0;
unsigned int var_18 = 838076620U;
short var_19 = (short)29915;
unsigned int var_20 = 3256146471U;
long long int var_21 = 6797794520675304477LL;
void init() {
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
