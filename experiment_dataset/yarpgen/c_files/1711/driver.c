#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-15;
unsigned int var_10 = 1042421647U;
short var_11 = (short)9069;
long long int var_12 = 4678940004316562287LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)24228;
unsigned short var_16 = (unsigned short)18744;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
