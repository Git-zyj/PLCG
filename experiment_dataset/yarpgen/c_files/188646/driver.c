#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4139601611U;
unsigned short var_1 = (unsigned short)22320;
long long int var_2 = -2741707164988869154LL;
unsigned short var_6 = (unsigned short)3649;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)-58;
signed char var_13 = (signed char)-82;
int zero = 0;
signed char var_14 = (signed char)-97;
unsigned long long int var_15 = 13382270455884822202ULL;
signed char var_16 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
