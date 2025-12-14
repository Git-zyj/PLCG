#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)48225;
long long int var_8 = -2505785676265769810LL;
unsigned short var_13 = (unsigned short)25467;
unsigned long long int var_17 = 16767103914754740862ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-8103;
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
