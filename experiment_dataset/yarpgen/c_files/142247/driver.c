#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 605192242U;
long long int var_1 = 4622413081573698709LL;
long long int var_4 = -444920034693369166LL;
unsigned long long int var_6 = 3891989687368421888ULL;
unsigned short var_7 = (unsigned short)36428;
_Bool var_9 = (_Bool)0;
long long int var_14 = -6160942343733043267LL;
int zero = 0;
int var_15 = 830036329;
signed char var_16 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
