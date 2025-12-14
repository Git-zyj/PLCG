#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_17 = -3651442416586953899LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)33418;
unsigned long long int var_21 = 4030727616137127935ULL;
unsigned char var_22 = (unsigned char)124;
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
