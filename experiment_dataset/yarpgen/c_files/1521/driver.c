#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned long long int var_4 = 3190769461260307553ULL;
unsigned int var_5 = 891613714U;
_Bool var_14 = (_Bool)1;
long long int var_16 = 4647725799347683705LL;
int zero = 0;
unsigned long long int var_20 = 15337557701170741622ULL;
short var_21 = (short)20891;
long long int var_22 = -781829655751806795LL;
int var_23 = -426130700;
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
