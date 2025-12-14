#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_5 = (unsigned short)39653;
unsigned long long int var_6 = 17213451633823332114ULL;
_Bool var_9 = (_Bool)0;
int var_10 = 274747896;
int zero = 0;
short var_17 = (short)15564;
unsigned long long int var_18 = 5845627328842750873ULL;
signed char var_19 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
