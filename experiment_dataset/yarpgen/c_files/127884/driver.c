#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
unsigned short var_3 = (unsigned short)41083;
unsigned long long int var_6 = 18407797049158915423ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)60910;
signed char var_12 = (signed char)91;
long long int var_13 = 1315944943555669545LL;
void init() {
}

void checksum() {
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
