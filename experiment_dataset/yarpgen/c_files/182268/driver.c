#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-69;
long long int var_1 = -7681222303956287002LL;
int var_4 = 801424028;
int var_7 = -1246090313;
int var_10 = 8338501;
long long int var_12 = 7422507870925675752LL;
long long int var_13 = -8783860459375443160LL;
long long int var_15 = -6941910375339421277LL;
int zero = 0;
long long int var_18 = -1928249814552627204LL;
unsigned long long int var_19 = 16071176051186413215ULL;
short var_20 = (short)-32374;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
