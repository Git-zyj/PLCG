#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-77;
unsigned short var_10 = (unsigned short)30003;
signed char var_12 = (signed char)4;
unsigned short var_14 = (unsigned short)30231;
unsigned short var_15 = (unsigned short)8867;
int zero = 0;
unsigned short var_17 = (unsigned short)2245;
unsigned short var_18 = (unsigned short)6171;
unsigned short var_19 = (unsigned short)54781;
void init() {
}

void checksum() {
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
