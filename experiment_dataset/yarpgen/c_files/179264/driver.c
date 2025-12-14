#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)6;
int var_6 = -1610110162;
signed char var_11 = (signed char)-124;
int var_12 = 207352014;
int zero = 0;
signed char var_16 = (signed char)-58;
int var_17 = -300530121;
short var_18 = (short)7812;
int var_19 = 30160173;
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
