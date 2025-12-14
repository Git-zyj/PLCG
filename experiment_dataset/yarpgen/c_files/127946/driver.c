#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1938926984;
int var_1 = -482307972;
unsigned char var_3 = (unsigned char)162;
int var_7 = 890377448;
int var_8 = 279789140;
int var_9 = -2025326280;
int var_12 = 1324922650;
int zero = 0;
int var_13 = -1788959999;
int var_14 = 213985049;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
