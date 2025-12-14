#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1274168614;
_Bool var_3 = (_Bool)1;
int var_4 = 2024342707;
unsigned long long int var_5 = 10150090773669359602ULL;
int var_6 = -1066566629;
unsigned int var_9 = 4029916291U;
int zero = 0;
unsigned char var_11 = (unsigned char)127;
int var_12 = 215485855;
void init() {
}

void checksum() {
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
