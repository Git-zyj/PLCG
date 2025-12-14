#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 575323982;
signed char var_6 = (signed char)-79;
int var_7 = -1014791228;
int var_9 = -1499048616;
unsigned short var_10 = (unsigned short)15241;
int var_11 = -84389159;
signed char var_13 = (signed char)44;
int zero = 0;
int var_14 = -776022598;
unsigned short var_15 = (unsigned short)25258;
int var_16 = 1016351296;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
