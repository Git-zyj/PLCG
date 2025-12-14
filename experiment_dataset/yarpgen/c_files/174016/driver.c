#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3537995711U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)28342;
unsigned short var_17 = (unsigned short)60763;
long long int var_18 = 9039054392446881747LL;
short var_19 = (short)30090;
void init() {
}

void checksum() {
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
