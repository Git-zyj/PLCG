#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1769904912437450018LL;
long long int var_6 = 8391387474642398609LL;
unsigned long long int var_7 = 1081669453388439959ULL;
signed char var_8 = (signed char)-111;
int zero = 0;
unsigned int var_16 = 2781378966U;
short var_17 = (short)-19468;
_Bool var_18 = (_Bool)1;
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
