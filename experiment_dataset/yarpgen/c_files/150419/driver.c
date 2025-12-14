#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3957088339U;
short var_1 = (short)-23100;
long long int var_10 = -8188026581258038368LL;
unsigned long long int var_11 = 11476321511071216871ULL;
int zero = 0;
int var_12 = 1903889255;
unsigned short var_13 = (unsigned short)59712;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
