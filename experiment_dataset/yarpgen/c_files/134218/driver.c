#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1922349372;
short var_4 = (short)17230;
signed char var_8 = (signed char)-15;
long long int var_9 = 4773199637479930459LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1171918597U;
short var_13 = (short)-7192;
long long int var_14 = 6280132412316149661LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
