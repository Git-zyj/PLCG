#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7233699761596836776ULL;
short var_4 = (short)-592;
unsigned long long int var_5 = 345902533492186882ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)7;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 747304704U;
unsigned long long int var_13 = 11167674763186042015ULL;
unsigned int var_14 = 1544703522U;
int zero = 0;
int var_17 = -732185812;
short var_18 = (short)-23383;
unsigned short var_19 = (unsigned short)18897;
unsigned char var_20 = (unsigned char)118;
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
