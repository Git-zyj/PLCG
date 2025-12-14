#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54887;
unsigned int var_5 = 4037902869U;
unsigned char var_9 = (unsigned char)91;
unsigned long long int var_11 = 11596545452584089114ULL;
int var_12 = 1286477094;
unsigned long long int var_14 = 12393056208728091705ULL;
int zero = 0;
int var_17 = -1673312916;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = -428313147;
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
