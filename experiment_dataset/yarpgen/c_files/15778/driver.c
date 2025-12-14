#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)293;
int var_8 = 150502402;
unsigned char var_9 = (unsigned char)57;
unsigned long long int var_14 = 1617591830050136273ULL;
int zero = 0;
unsigned int var_15 = 168104457U;
unsigned char var_16 = (unsigned char)160;
long long int var_17 = 3407886165351401966LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
