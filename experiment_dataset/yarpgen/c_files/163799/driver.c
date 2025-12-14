#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)12;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)37;
int zero = 0;
int var_13 = 360155292;
signed char var_14 = (signed char)-117;
unsigned short var_15 = (unsigned short)5475;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
