#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)22540;
long long int var_2 = 8937539228738058320LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-6431;
int var_6 = -1517761982;
unsigned int var_7 = 1902671016U;
unsigned long long int var_13 = 13831038291990232271ULL;
long long int var_14 = -7536329091295664391LL;
int zero = 0;
unsigned long long int var_16 = 1123114472429903047ULL;
long long int var_17 = -8143408069935179224LL;
void init() {
}

void checksum() {
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
