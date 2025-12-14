#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-36;
signed char var_14 = (signed char)9;
short var_15 = (short)10557;
short var_17 = (short)6948;
unsigned short var_18 = (unsigned short)38523;
int zero = 0;
int var_20 = -1316113625;
int var_21 = 203045431;
int var_22 = 1809103331;
unsigned short var_23 = (unsigned short)46289;
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
