#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)4491;
unsigned long long int var_9 = 9785816798045906730ULL;
unsigned long long int var_13 = 11157232689537660644ULL;
unsigned char var_14 = (unsigned char)42;
int zero = 0;
long long int var_19 = -5122537616174580571LL;
int var_20 = 431452440;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
