#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_16 = 7148051809888657278ULL;
unsigned short var_18 = (unsigned short)4492;
int zero = 0;
unsigned int var_20 = 3337536547U;
unsigned long long int var_21 = 8876844487978382781ULL;
unsigned short var_22 = (unsigned short)53910;
unsigned long long int var_23 = 4024217378323276128ULL;
unsigned long long int var_24 = 15695015486625421127ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
