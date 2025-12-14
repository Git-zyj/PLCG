#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26383;
long long int var_1 = 5048013556118929959LL;
signed char var_6 = (signed char)-83;
unsigned long long int var_7 = 3379900892216172215ULL;
int zero = 0;
int var_11 = 122186259;
signed char var_12 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
