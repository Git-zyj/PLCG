#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24029;
short var_2 = (short)30010;
signed char var_3 = (signed char)67;
unsigned int var_4 = 3400085546U;
unsigned long long int var_5 = 1983495021264756914ULL;
signed char var_8 = (signed char)-101;
unsigned short var_10 = (unsigned short)32440;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 18708395U;
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
