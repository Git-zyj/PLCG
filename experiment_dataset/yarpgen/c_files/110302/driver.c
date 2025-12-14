#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2076121328752128602LL;
unsigned long long int var_8 = 13680604542359172012ULL;
signed char var_10 = (signed char)51;
unsigned long long int var_14 = 15483813975127682984ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6270105129081083891LL;
int var_17 = 519951443;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
