#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3674804055U;
unsigned char var_2 = (unsigned char)37;
int var_8 = -1515771628;
long long int var_9 = 7628612167720403053LL;
long long int var_15 = 5909739840484173978LL;
int zero = 0;
unsigned long long int var_16 = 9335613651435764204ULL;
int var_17 = -1564821835;
long long int var_18 = 4459614945977357171LL;
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
