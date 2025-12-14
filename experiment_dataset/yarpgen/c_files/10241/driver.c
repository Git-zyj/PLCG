#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62136;
signed char var_2 = (signed char)-115;
unsigned short var_9 = (unsigned short)58658;
unsigned int var_12 = 2856292405U;
signed char var_13 = (signed char)-8;
unsigned int var_14 = 726201995U;
int zero = 0;
int var_15 = 408892927;
unsigned long long int var_16 = 12491821524299502341ULL;
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
