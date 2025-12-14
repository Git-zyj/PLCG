#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
_Bool var_4 = (_Bool)1;
long long int var_6 = 3822344275492967024LL;
short var_8 = (short)4771;
unsigned short var_14 = (unsigned short)51325;
signed char var_16 = (signed char)5;
long long int var_17 = -8570062790906498431LL;
int zero = 0;
signed char var_20 = (signed char)-114;
short var_21 = (short)-25433;
int var_22 = 2138250196;
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
