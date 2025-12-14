#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7300423460990633919LL;
long long int var_7 = 3178380803294209723LL;
unsigned long long int var_8 = 5257389605685797651ULL;
unsigned short var_9 = (unsigned short)7309;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-14824;
long long int var_15 = 1698128436952504951LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6919634684175420872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
