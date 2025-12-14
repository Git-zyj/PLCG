#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-42;
unsigned char var_3 = (unsigned char)88;
unsigned char var_4 = (unsigned char)149;
unsigned long long int var_6 = 14444499763632316318ULL;
int var_7 = -769891996;
unsigned long long int var_8 = 17592581801802158577ULL;
short var_9 = (short)25342;
short var_12 = (short)17559;
unsigned int var_13 = 483310518U;
int var_15 = 722950821;
unsigned long long int var_16 = 868842850606734961ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)159;
unsigned int var_21 = 476225076U;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
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
