#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
short var_3 = (short)13004;
signed char var_4 = (signed char)-45;
signed char var_5 = (signed char)-72;
unsigned long long int var_11 = 2643233375846702645ULL;
unsigned short var_14 = (unsigned short)19478;
int zero = 0;
signed char var_15 = (signed char)94;
int var_16 = 1551584609;
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
