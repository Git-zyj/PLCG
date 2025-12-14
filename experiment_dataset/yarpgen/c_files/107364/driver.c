#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -634612275;
int var_4 = 1223169059;
signed char var_7 = (signed char)52;
signed char var_8 = (signed char)-39;
signed char var_9 = (signed char)95;
signed char var_14 = (signed char)23;
int zero = 0;
signed char var_15 = (signed char)-56;
int var_16 = 2033083178;
int var_17 = 1943273111;
void init() {
}

void checksum() {
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
