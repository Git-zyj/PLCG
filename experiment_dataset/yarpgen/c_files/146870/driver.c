#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19452;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-12927;
int zero = 0;
long long int var_19 = -7256893412003389230LL;
unsigned short var_20 = (unsigned short)9006;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
