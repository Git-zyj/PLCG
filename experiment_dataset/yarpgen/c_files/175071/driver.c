#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5480153968223217868LL;
signed char var_3 = (signed char)-118;
short var_4 = (short)30758;
_Bool var_6 = (_Bool)0;
int zero = 0;
long long int var_11 = 8039844174724793041LL;
unsigned short var_12 = (unsigned short)36651;
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
