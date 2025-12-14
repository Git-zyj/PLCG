#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1971;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 4047785210U;
_Bool var_6 = (_Bool)1;
int var_7 = -1602332632;
unsigned int var_12 = 3483214145U;
int zero = 0;
short var_20 = (short)31611;
int var_21 = 2118196562;
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
