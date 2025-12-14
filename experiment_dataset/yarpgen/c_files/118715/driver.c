#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)22168;
unsigned long long int var_6 = 975549206546429742ULL;
short var_8 = (short)553;
_Bool var_10 = (_Bool)0;
int var_11 = -1338289950;
int var_16 = -1392847905;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-108;
long long int var_22 = -5822111632279301850LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
