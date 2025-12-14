#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
signed char var_2 = (signed char)-49;
unsigned char var_3 = (unsigned char)173;
signed char var_7 = (signed char)127;
signed char var_9 = (signed char)-85;
int zero = 0;
signed char var_10 = (signed char)75;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)152;
short var_13 = (short)-1300;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
