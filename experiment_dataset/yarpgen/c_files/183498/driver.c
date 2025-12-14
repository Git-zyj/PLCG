#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)36;
signed char var_18 = (signed char)-123;
int zero = 0;
unsigned short var_20 = (unsigned short)8198;
signed char var_21 = (signed char)86;
signed char var_22 = (signed char)-59;
long long int var_23 = -885623282949566799LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
