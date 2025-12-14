#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 448065930U;
unsigned short var_7 = (unsigned short)31346;
short var_9 = (short)18450;
int zero = 0;
short var_11 = (short)-28491;
long long int var_12 = 8541250494626603939LL;
short var_13 = (short)-29822;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
