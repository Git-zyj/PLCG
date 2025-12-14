#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39560;
short var_1 = (short)-7221;
short var_2 = (short)19714;
short var_6 = (short)-5636;
long long int var_7 = 5872856361589681270LL;
long long int var_8 = -5268831040586468770LL;
int var_9 = 531042731;
int zero = 0;
long long int var_10 = 3168779701711662672LL;
short var_11 = (short)5765;
int var_12 = 170229701;
int var_13 = 1182395132;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
