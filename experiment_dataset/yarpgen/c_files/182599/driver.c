#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63682;
unsigned short var_5 = (unsigned short)12217;
int zero = 0;
long long int var_19 = -3037325252384465807LL;
long long int var_20 = 166231743620799857LL;
long long int var_21 = -3391129310071390131LL;
unsigned short var_22 = (unsigned short)21752;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
