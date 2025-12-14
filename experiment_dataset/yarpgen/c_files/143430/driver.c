#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-10;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)50249;
signed char var_8 = (signed char)-23;
int zero = 0;
signed char var_20 = (signed char)6;
signed char var_21 = (signed char)-95;
void init() {
}

void checksum() {
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
