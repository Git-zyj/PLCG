#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-3;
unsigned short var_4 = (unsigned short)35364;
int var_7 = 2048476089;
unsigned long long int var_11 = 8806164384224380977ULL;
int zero = 0;
int var_17 = 565408757;
int var_18 = -1127704057;
unsigned long long int var_19 = 2692544041489004814ULL;
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
