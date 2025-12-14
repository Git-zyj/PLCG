#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16534284482260595662ULL;
long long int var_2 = -1286654106052367542LL;
unsigned int var_3 = 3458586147U;
signed char var_4 = (signed char)89;
signed char var_9 = (signed char)5;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1429653156U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-6;
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
