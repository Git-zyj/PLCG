#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2133997004466407897LL;
unsigned long long int var_8 = 14344360335625071823ULL;
unsigned long long int var_10 = 16520157386214377603ULL;
signed char var_11 = (signed char)-40;
int zero = 0;
int var_17 = 546092043;
unsigned short var_18 = (unsigned short)7735;
unsigned short var_19 = (unsigned short)31176;
short var_20 = (short)-25374;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
