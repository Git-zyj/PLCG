#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3375175133U;
unsigned char var_2 = (unsigned char)208;
unsigned long long int var_11 = 11514119064145831930ULL;
unsigned int var_14 = 2711549329U;
unsigned short var_17 = (unsigned short)55150;
int zero = 0;
int var_19 = 1607202175;
unsigned long long int var_20 = 14156717073661819998ULL;
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
