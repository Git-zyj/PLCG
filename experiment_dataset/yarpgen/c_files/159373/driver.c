#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-13243;
int var_6 = 415587490;
unsigned long long int var_8 = 7214175359317633409ULL;
int zero = 0;
unsigned int var_12 = 582580210U;
short var_13 = (short)11259;
short var_14 = (short)-26661;
int var_15 = 1367684606;
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
