#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 505488921U;
signed char var_2 = (signed char)6;
_Bool var_9 = (_Bool)1;
long long int var_11 = 7850478632225562529LL;
signed char var_15 = (signed char)103;
int zero = 0;
long long int var_16 = 7757518736281903184LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5699188474634615797LL;
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
