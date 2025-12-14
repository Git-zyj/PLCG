#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13341973558519392242ULL;
short var_7 = (short)15304;
short var_11 = (short)19438;
short var_15 = (short)-2564;
short var_18 = (short)-20730;
short var_19 = (short)-4440;
int zero = 0;
unsigned int var_20 = 1215683954U;
unsigned int var_21 = 597494042U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
