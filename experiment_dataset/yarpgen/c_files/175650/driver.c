#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4004885396U;
unsigned int var_1 = 4081451486U;
unsigned char var_4 = (unsigned char)175;
unsigned long long int var_5 = 16068951103045168450ULL;
unsigned int var_11 = 1517648601U;
short var_12 = (short)24257;
int zero = 0;
unsigned short var_17 = (unsigned short)41735;
int var_18 = -426535236;
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
