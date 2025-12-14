#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4992466392855825194LL;
unsigned int var_5 = 262637926U;
unsigned long long int var_10 = 6479618551885112909ULL;
int var_12 = 836158262;
int zero = 0;
unsigned short var_14 = (unsigned short)32856;
unsigned long long int var_15 = 9020595535750361874ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
