#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10965;
long long int var_3 = -6973203239435783017LL;
_Bool var_8 = (_Bool)0;
unsigned int var_14 = 3518561145U;
int zero = 0;
int var_18 = -536655662;
long long int var_19 = -5731988684392392991LL;
long long int var_20 = 7896985745441017201LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
