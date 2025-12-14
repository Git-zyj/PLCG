#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -509672727006660362LL;
unsigned int var_14 = 309228854U;
int zero = 0;
long long int var_16 = -719723763515686350LL;
unsigned short var_17 = (unsigned short)39647;
long long int var_18 = -2228513134684941763LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
