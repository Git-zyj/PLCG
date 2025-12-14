#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1325792554;
unsigned short var_3 = (unsigned short)32166;
int var_5 = 832610528;
unsigned short var_10 = (unsigned short)26252;
unsigned long long int var_12 = 9462482385601857235ULL;
long long int var_13 = -503838322717932781LL;
int zero = 0;
int var_14 = 261033994;
unsigned int var_15 = 2347203627U;
unsigned short var_16 = (unsigned short)63872;
unsigned short var_17 = (unsigned short)48733;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
