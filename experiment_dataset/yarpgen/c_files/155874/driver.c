#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17082;
unsigned long long int var_4 = 2103584268978081185ULL;
long long int var_5 = -4714124804820169875LL;
unsigned short var_10 = (unsigned short)106;
signed char var_11 = (signed char)32;
unsigned long long int var_13 = 8702254398551843104ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)47074;
int zero = 0;
long long int var_16 = 832360206286525356LL;
short var_17 = (short)-27326;
int var_18 = -622559441;
int var_19 = -1569496129;
short var_20 = (short)26796;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
