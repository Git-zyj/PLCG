#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15937644782316297117ULL;
short var_6 = (short)31462;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 12874706575442450387ULL;
int zero = 0;
signed char var_16 = (signed char)-63;
long long int var_17 = -6868752812386016177LL;
long long int var_18 = 555655625462499755LL;
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
