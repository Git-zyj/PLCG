#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40313;
unsigned short var_2 = (unsigned short)64369;
short var_3 = (short)25015;
int var_6 = -47768344;
long long int var_7 = 971201940815073960LL;
int var_8 = 1568874184;
int zero = 0;
unsigned short var_10 = (unsigned short)522;
_Bool var_11 = (_Bool)0;
short var_12 = (short)20893;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
