#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43387;
unsigned short var_1 = (unsigned short)13938;
_Bool var_2 = (_Bool)0;
int var_3 = -1727319122;
unsigned short var_4 = (unsigned short)22823;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)30312;
signed char var_8 = (signed char)56;
unsigned long long int var_9 = 14479500424391330732ULL;
unsigned long long int var_13 = 4674808483974695744ULL;
int zero = 0;
long long int var_15 = 2446686806633026582LL;
signed char var_16 = (signed char)35;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)39230;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
