#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2384848580U;
short var_8 = (short)5017;
signed char var_10 = (signed char)-54;
_Bool var_13 = (_Bool)1;
short var_14 = (short)32657;
long long int var_16 = 2189742643880589573LL;
short var_19 = (short)-18922;
int zero = 0;
short var_20 = (short)19264;
short var_21 = (short)4639;
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
