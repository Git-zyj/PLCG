#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-107;
unsigned long long int var_7 = 4750314996183304962ULL;
long long int var_9 = -5386632779327504487LL;
unsigned long long int var_14 = 13848816105113407230ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8633715662221168746LL;
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
