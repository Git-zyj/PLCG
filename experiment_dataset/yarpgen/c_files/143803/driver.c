#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1835677185;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)23;
unsigned long long int var_15 = 18121132990369429601ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)7;
int var_18 = 1096208035;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
