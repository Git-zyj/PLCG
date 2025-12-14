#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 491593032;
signed char var_10 = (signed char)-45;
unsigned int var_15 = 3506545396U;
unsigned char var_16 = (unsigned char)159;
int zero = 0;
long long int var_17 = -7017617599002379910LL;
unsigned long long int var_18 = 2723656015502885808ULL;
unsigned short var_19 = (unsigned short)49231;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
