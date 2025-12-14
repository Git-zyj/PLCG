#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1364448567U;
unsigned long long int var_7 = 10824842161136117630ULL;
long long int var_12 = 2199580131593121364LL;
signed char var_13 = (signed char)15;
_Bool var_17 = (_Bool)1;
signed char var_19 = (signed char)-30;
int zero = 0;
unsigned short var_20 = (unsigned short)36816;
long long int var_21 = -727428454462320576LL;
void init() {
}

void checksum() {
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
