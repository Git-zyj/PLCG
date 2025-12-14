#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)70;
signed char var_3 = (signed char)-12;
signed char var_4 = (signed char)115;
unsigned short var_5 = (unsigned short)9394;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-14497;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
