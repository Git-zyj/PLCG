#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 793893101;
unsigned long long int var_6 = 13026001249720987624ULL;
int var_7 = 1627070598;
unsigned int var_8 = 3273991667U;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
unsigned short var_18 = (unsigned short)37576;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
