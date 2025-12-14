#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -8624821133151761235LL;
long long int var_3 = 6014388249587878004LL;
signed char var_4 = (signed char)-109;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)139;
signed char var_8 = (signed char)-115;
int zero = 0;
long long int var_11 = 7325668444878067015LL;
int var_12 = 370840673;
unsigned short var_13 = (unsigned short)31051;
signed char var_14 = (signed char)-33;
short var_15 = (short)-6118;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
