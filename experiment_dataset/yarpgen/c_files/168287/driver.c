#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 414384484;
unsigned long long int var_3 = 1471791642718912661ULL;
int var_7 = 1137546293;
int var_12 = -579810797;
unsigned char var_13 = (unsigned char)232;
unsigned long long int var_15 = 4856809392741919041ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)38561;
unsigned long long int var_17 = 18374184109251157092ULL;
short var_18 = (short)26015;
int var_19 = 881955387;
void init() {
}

void checksum() {
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
