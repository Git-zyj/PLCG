#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1595282953764583239LL;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)21764;
unsigned long long int var_18 = 4971053799007071818ULL;
unsigned char var_19 = (unsigned char)152;
int zero = 0;
long long int var_20 = 7300607877349128961LL;
short var_21 = (short)-30213;
long long int var_22 = -1310886414724831226LL;
short var_23 = (short)-17363;
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
