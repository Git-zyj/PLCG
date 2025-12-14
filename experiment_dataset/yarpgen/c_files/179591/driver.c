#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6534431862453874409LL;
unsigned int var_9 = 4174102566U;
long long int var_10 = 7485794564092451987LL;
unsigned int var_11 = 2751699347U;
long long int var_12 = -4579312782444270700LL;
long long int var_14 = 1739976637073018609LL;
int zero = 0;
unsigned int var_15 = 724956014U;
_Bool var_16 = (_Bool)0;
int var_17 = 539094959;
unsigned short var_18 = (unsigned short)57153;
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
