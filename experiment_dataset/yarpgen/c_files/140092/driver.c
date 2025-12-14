#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 94966265642213011LL;
unsigned char var_11 = (unsigned char)149;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1307391797515332571LL;
short var_16 = (short)-3927;
short var_18 = (short)-13980;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3814112974U;
void init() {
}

void checksum() {
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
