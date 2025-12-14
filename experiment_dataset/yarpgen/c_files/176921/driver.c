#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)108;
unsigned long long int var_5 = 18005030163452356784ULL;
unsigned short var_6 = (unsigned short)32813;
long long int var_10 = -1526677223559088297LL;
int zero = 0;
short var_17 = (short)22515;
long long int var_18 = -5664645432554051173LL;
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
