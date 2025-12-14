#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 694380572U;
unsigned int var_9 = 3987649590U;
unsigned char var_15 = (unsigned char)69;
unsigned char var_17 = (unsigned char)252;
int zero = 0;
unsigned int var_19 = 1256841750U;
unsigned int var_20 = 3096250546U;
unsigned char var_21 = (unsigned char)226;
unsigned int var_22 = 4235812556U;
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
