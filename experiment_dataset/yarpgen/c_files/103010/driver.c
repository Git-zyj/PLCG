#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1877130980;
_Bool var_1 = (_Bool)0;
long long int var_6 = -4559337186756232210LL;
unsigned short var_8 = (unsigned short)17198;
unsigned int var_10 = 1234449675U;
_Bool var_14 = (_Bool)1;
int var_17 = -253373660;
int zero = 0;
unsigned int var_20 = 449329402U;
long long int var_21 = 3859697915828033324LL;
unsigned short var_22 = (unsigned short)36141;
int var_23 = 918008245;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
