#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)26;
signed char var_5 = (signed char)11;
unsigned long long int var_6 = 17746884866961153115ULL;
signed char var_7 = (signed char)27;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 920386009;
void init() {
}

void checksum() {
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
