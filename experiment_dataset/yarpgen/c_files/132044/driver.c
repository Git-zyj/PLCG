#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
_Bool var_1 = (_Bool)0;
unsigned int var_8 = 217835020U;
short var_9 = (short)957;
int zero = 0;
long long int var_10 = 1052254589100349269LL;
signed char var_11 = (signed char)126;
long long int var_12 = -1414079390651641205LL;
unsigned int var_13 = 1950493586U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
