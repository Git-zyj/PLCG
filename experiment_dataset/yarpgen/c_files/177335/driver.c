#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 13380537286607420392ULL;
long long int var_8 = 8809834888314474801LL;
unsigned long long int var_11 = 10786218734445511675ULL;
int zero = 0;
long long int var_17 = 3908967637582124852LL;
unsigned char var_18 = (unsigned char)75;
void init() {
}

void checksum() {
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
