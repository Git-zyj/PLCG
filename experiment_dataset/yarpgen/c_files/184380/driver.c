#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32354;
int var_5 = 1940249558;
short var_7 = (short)22283;
long long int var_8 = 3371361840506569989LL;
long long int var_9 = -24069554777261562LL;
int zero = 0;
unsigned char var_20 = (unsigned char)193;
unsigned long long int var_21 = 3247877621028721832ULL;
unsigned short var_22 = (unsigned short)1212;
void init() {
}

void checksum() {
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
