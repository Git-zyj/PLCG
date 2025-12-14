#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
unsigned int var_3 = 3794790035U;
unsigned int var_4 = 1510302602U;
unsigned long long int var_9 = 6409356446747310032ULL;
int var_11 = -1749476970;
int zero = 0;
long long int var_14 = -6422826969428748950LL;
unsigned char var_15 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
