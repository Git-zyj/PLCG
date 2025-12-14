#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -489657951;
int var_3 = -1786451313;
long long int var_5 = 8231753259244339886LL;
long long int var_6 = 1413579567731725936LL;
unsigned int var_9 = 3136568185U;
unsigned int var_12 = 1515978267U;
int zero = 0;
unsigned short var_15 = (unsigned short)40096;
int var_16 = 777282103;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
