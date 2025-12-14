#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
signed char var_1 = (signed char)102;
signed char var_4 = (signed char)-78;
int var_5 = 652972098;
signed char var_6 = (signed char)-93;
int var_7 = 1462049031;
signed char var_8 = (signed char)-2;
signed char var_9 = (signed char)77;
int var_12 = 1929796942;
int var_15 = -541746229;
int zero = 0;
signed char var_18 = (signed char)-115;
signed char var_19 = (signed char)123;
int var_20 = 929933392;
int var_21 = -729745742;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
