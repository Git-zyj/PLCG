#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
signed char var_1 = (signed char)104;
signed char var_2 = (signed char)9;
signed char var_3 = (signed char)-14;
signed char var_6 = (signed char)97;
signed char var_8 = (signed char)-1;
signed char var_9 = (signed char)62;
signed char var_10 = (signed char)-111;
signed char var_11 = (signed char)127;
signed char var_13 = (signed char)-29;
int zero = 0;
signed char var_14 = (signed char)-60;
signed char var_15 = (signed char)-44;
signed char var_16 = (signed char)22;
signed char var_17 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
