#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-1;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
unsigned char var_20 = (unsigned char)195;
unsigned char var_21 = (unsigned char)222;
unsigned int var_22 = 3039982300U;
long long int var_23 = -9211402495604758357LL;
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
