#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
long long int var_2 = -4182687848622914299LL;
unsigned char var_3 = (unsigned char)112;
_Bool var_5 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-97;
short var_13 = (short)-5084;
signed char var_14 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
