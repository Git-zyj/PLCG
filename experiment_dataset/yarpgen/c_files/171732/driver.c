#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1413683217;
unsigned long long int var_6 = 3432238641936349516ULL;
signed char var_14 = (signed char)5;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1661438285;
unsigned short var_17 = (unsigned short)25366;
int var_18 = 554239912;
unsigned short var_19 = (unsigned short)16575;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
