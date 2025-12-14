#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17113;
unsigned long long int var_1 = 8323514182678952837ULL;
unsigned short var_2 = (unsigned short)51072;
int var_8 = 1477359956;
unsigned int var_10 = 1253947878U;
int zero = 0;
short var_12 = (short)24336;
unsigned int var_13 = 478152838U;
unsigned short var_14 = (unsigned short)56682;
unsigned long long int var_15 = 3176960939098056658ULL;
unsigned int var_16 = 4121260970U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
