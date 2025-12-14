#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = -788236104;
signed char var_6 = (signed char)58;
short var_8 = (short)13574;
unsigned long long int var_10 = 2669653963137865124ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)9;
signed char var_12 = (signed char)-77;
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
