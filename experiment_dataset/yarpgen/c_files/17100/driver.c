#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)95;
long long int var_8 = 5195512983652951514LL;
long long int var_11 = -5503389103158592700LL;
signed char var_12 = (signed char)-90;
int zero = 0;
unsigned short var_14 = (unsigned short)32456;
signed char var_15 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
