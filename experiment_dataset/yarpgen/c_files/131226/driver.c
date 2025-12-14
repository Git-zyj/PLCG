#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
int var_3 = 1350039731;
short var_5 = (short)9545;
signed char var_6 = (signed char)17;
unsigned int var_9 = 2863381103U;
int var_12 = 1970264255;
long long int var_13 = -1073054147144468480LL;
long long int var_15 = 6081107345661102458LL;
int zero = 0;
int var_16 = -1383712787;
signed char var_17 = (signed char)-74;
signed char var_18 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
