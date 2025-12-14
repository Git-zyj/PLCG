#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
unsigned long long int var_4 = 3575206476917254590ULL;
signed char var_8 = (signed char)-7;
short var_10 = (short)7297;
unsigned short var_11 = (unsigned short)39754;
signed char var_15 = (signed char)-21;
long long int var_17 = -7464338792390261545LL;
signed char var_18 = (signed char)-49;
short var_19 = (short)6164;
int zero = 0;
unsigned int var_20 = 1645512846U;
unsigned short var_21 = (unsigned short)19054;
unsigned char var_22 = (unsigned char)86;
signed char var_23 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
