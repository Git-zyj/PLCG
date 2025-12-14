#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25361;
int var_3 = 2057566437;
unsigned long long int var_6 = 16442418567921807017ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
short var_13 = (short)13294;
unsigned short var_14 = (unsigned short)16397;
unsigned short var_15 = (unsigned short)25774;
void init() {
}

void checksum() {
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
