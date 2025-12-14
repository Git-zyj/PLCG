#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1465371460;
int var_5 = -626157626;
unsigned long long int var_7 = 17828121234335766485ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)9406;
unsigned long long int var_11 = 3284376454729728521ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
