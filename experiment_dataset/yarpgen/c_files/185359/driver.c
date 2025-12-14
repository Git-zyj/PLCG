#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3255462076U;
long long int var_3 = 1173913049569928032LL;
int var_6 = 1833749069;
unsigned int var_7 = 1970730519U;
signed char var_8 = (signed char)107;
unsigned int var_9 = 1949426812U;
unsigned int var_10 = 3278127097U;
long long int var_14 = -2652771388615492686LL;
int zero = 0;
unsigned long long int var_15 = 8208479412136975541ULL;
signed char var_16 = (signed char)60;
unsigned char var_17 = (unsigned char)58;
unsigned int var_18 = 1606018428U;
short var_19 = (short)23185;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
