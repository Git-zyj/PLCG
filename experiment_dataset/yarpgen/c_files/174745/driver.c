#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned long long int var_2 = 8138466272879724313ULL;
unsigned char var_4 = (unsigned char)222;
int var_6 = -928237696;
long long int var_8 = 8731224019876729602LL;
unsigned long long int var_13 = 8246941494939382646ULL;
int zero = 0;
short var_15 = (short)-19256;
int var_16 = -1946538296;
int var_17 = 568458303;
void init() {
}

void checksum() {
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
