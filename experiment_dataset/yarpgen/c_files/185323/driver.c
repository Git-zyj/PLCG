#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5448562599016553651ULL;
unsigned int var_3 = 3114399129U;
int var_4 = -1651964603;
signed char var_7 = (signed char)-82;
unsigned int var_8 = 1078273827U;
int var_11 = 323483333;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 2859146149152239660ULL;
short var_20 = (short)12564;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)20013;
long long int var_23 = 7242194365190724564LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
