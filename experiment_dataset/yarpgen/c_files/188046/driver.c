#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1837099242;
long long int var_3 = -4416436123322187143LL;
int var_5 = 96311337;
unsigned long long int var_8 = 15625933215081612469ULL;
unsigned long long int var_10 = 6720128093369169059ULL;
int zero = 0;
int var_11 = -966615852;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
