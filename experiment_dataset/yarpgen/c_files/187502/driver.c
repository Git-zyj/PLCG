#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned long long int var_2 = 3908740076909514936ULL;
unsigned int var_4 = 1068043006U;
short var_8 = (short)-25685;
unsigned int var_10 = 70024625U;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)89;
unsigned short var_16 = (unsigned short)25844;
unsigned int var_17 = 3988572416U;
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
