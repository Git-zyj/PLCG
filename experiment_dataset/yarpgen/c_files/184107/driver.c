#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 409580728;
signed char var_3 = (signed char)-118;
signed char var_10 = (signed char)-118;
signed char var_11 = (signed char)-121;
int zero = 0;
unsigned char var_17 = (unsigned char)88;
short var_18 = (short)-19531;
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
