#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
signed char var_1 = (signed char)-62;
signed char var_3 = (signed char)-98;
signed char var_5 = (signed char)-96;
signed char var_6 = (signed char)-122;
signed char var_7 = (signed char)2;
signed char var_8 = (signed char)-37;
signed char var_9 = (signed char)-121;
signed char var_10 = (signed char)-108;
signed char var_13 = (signed char)80;
signed char var_15 = (signed char)72;
int zero = 0;
signed char var_16 = (signed char)1;
signed char var_17 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
