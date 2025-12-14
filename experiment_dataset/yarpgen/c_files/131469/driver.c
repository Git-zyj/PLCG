#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27153;
int var_1 = 8207227;
unsigned long long int var_8 = 12758283151864037418ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3045570681846055602LL;
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
