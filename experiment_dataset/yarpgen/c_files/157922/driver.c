#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1076657106U;
unsigned long long int var_10 = 15966275022445222440ULL;
unsigned short var_14 = (unsigned short)30224;
unsigned int var_15 = 1341821788U;
unsigned long long int var_16 = 9138904562915152840ULL;
int zero = 0;
unsigned int var_19 = 2935676321U;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 1435652151814558528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
