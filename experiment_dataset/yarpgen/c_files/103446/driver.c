#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
unsigned int var_3 = 2585290111U;
unsigned int var_4 = 166274379U;
unsigned int var_6 = 1616266420U;
unsigned int var_7 = 1745397684U;
signed char var_9 = (signed char)-74;
signed char var_12 = (signed char)-80;
signed char var_14 = (signed char)-77;
unsigned int var_16 = 2728985411U;
int zero = 0;
unsigned int var_17 = 3064369147U;
unsigned int var_18 = 1975903462U;
void init() {
}

void checksum() {
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
