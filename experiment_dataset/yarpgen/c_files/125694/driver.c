#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2023298865;
int var_2 = 659604426;
int var_3 = -1229561361;
int var_6 = -328119515;
int var_9 = 866288894;
int zero = 0;
int var_12 = 868925812;
int var_13 = -1019062395;
int var_14 = 1404374652;
int var_15 = 1173465906;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
