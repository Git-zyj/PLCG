#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)63;
signed char var_3 = (signed char)-118;
signed char var_6 = (signed char)2;
signed char var_8 = (signed char)12;
signed char var_9 = (signed char)-5;
int zero = 0;
signed char var_10 = (signed char)74;
signed char var_11 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
