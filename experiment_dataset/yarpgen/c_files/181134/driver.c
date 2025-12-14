#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned char var_3 = (unsigned char)222;
short var_4 = (short)-188;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)159;
long long int var_9 = -6675640967022024226LL;
int zero = 0;
short var_20 = (short)-31594;
signed char var_21 = (signed char)-39;
signed char var_22 = (signed char)-96;
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
