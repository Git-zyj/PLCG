#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25649;
signed char var_10 = (signed char)-3;
unsigned short var_12 = (unsigned short)44832;
signed char var_13 = (signed char)51;
int zero = 0;
signed char var_16 = (signed char)-89;
signed char var_17 = (signed char)22;
signed char var_18 = (signed char)92;
signed char var_19 = (signed char)-66;
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
