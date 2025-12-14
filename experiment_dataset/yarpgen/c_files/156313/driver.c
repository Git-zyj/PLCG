#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 517331419U;
unsigned short var_2 = (unsigned short)19898;
_Bool var_5 = (_Bool)1;
long long int var_7 = -4428650842530525773LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 10830656653937566384ULL;
signed char var_12 = (signed char)-108;
int zero = 0;
signed char var_13 = (signed char)-100;
short var_14 = (short)13412;
int var_15 = -451515025;
long long int var_16 = 4606801204134969848LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
