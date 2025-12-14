#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1904304755;
int var_4 = 196788229;
signed char var_10 = (signed char)50;
short var_13 = (short)31228;
signed char var_15 = (signed char)-106;
int zero = 0;
signed char var_18 = (signed char)-9;
signed char var_19 = (signed char)55;
int var_20 = -1618979912;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
