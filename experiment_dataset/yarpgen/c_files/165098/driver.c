#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_5 = (short)-18342;
unsigned int var_11 = 622367984U;
long long int var_14 = -8658715201021187247LL;
long long int var_15 = -564769136790975945LL;
unsigned short var_16 = (unsigned short)28848;
int zero = 0;
int var_18 = -1268266803;
short var_19 = (short)15266;
void init() {
}

void checksum() {
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
