#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 642352735;
short var_1 = (short)-19501;
unsigned long long int var_7 = 11929035261694390593ULL;
unsigned long long int var_9 = 3400105579453305114ULL;
int zero = 0;
unsigned long long int var_11 = 30949403412795030ULL;
int var_12 = -1835890815;
unsigned char var_13 = (unsigned char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
