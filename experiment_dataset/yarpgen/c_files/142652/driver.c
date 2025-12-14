#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44003;
unsigned long long int var_14 = 14275809380785017181ULL;
unsigned int var_19 = 945041230U;
int zero = 0;
int var_20 = -973092781;
signed char var_21 = (signed char)-61;
unsigned short var_22 = (unsigned short)28152;
unsigned long long int var_23 = 15378992552379667338ULL;
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
