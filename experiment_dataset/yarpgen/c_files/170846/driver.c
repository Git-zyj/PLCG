#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_2 = (signed char)-67;
short var_4 = (short)20976;
unsigned short var_9 = (unsigned short)3028;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 7721770490519509530ULL;
int zero = 0;
unsigned long long int var_14 = 13624028600658769895ULL;
unsigned short var_15 = (unsigned short)32980;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
