#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11663463181022931229ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 1384238884571096245LL;
unsigned char var_8 = (unsigned char)196;
int zero = 0;
unsigned long long int var_10 = 10420379736959796893ULL;
unsigned long long int var_11 = 133202760774791671ULL;
unsigned long long int var_12 = 1970686493047432867ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
