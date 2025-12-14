#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8935929209076660590LL;
signed char var_5 = (signed char)17;
int var_7 = 1716280177;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_16 = -7823216566105629543LL;
long long int var_17 = 5820295912890867613LL;
int var_18 = -1000809537;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
