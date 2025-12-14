#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-1;
unsigned int var_11 = 1619448393U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)54115;
short var_20 = (short)25688;
unsigned short var_21 = (unsigned short)47617;
void init() {
}

void checksum() {
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
