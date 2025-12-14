#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
int var_4 = 1190606907;
unsigned int var_10 = 3210902312U;
unsigned char var_12 = (unsigned char)214;
short var_13 = (short)14353;
int zero = 0;
signed char var_15 = (signed char)35;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 15115823572022254403ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
