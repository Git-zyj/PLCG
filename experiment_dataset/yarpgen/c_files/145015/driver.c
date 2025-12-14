#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 997437614205512623LL;
unsigned int var_16 = 1028121248U;
int zero = 0;
int var_18 = -480040037;
unsigned int var_19 = 2869982282U;
unsigned short var_20 = (unsigned short)22933;
void init() {
}

void checksum() {
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
