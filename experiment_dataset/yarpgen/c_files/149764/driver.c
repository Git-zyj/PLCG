#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)110;
unsigned int var_7 = 30187767U;
unsigned long long int var_16 = 17856286902433617875ULL;
int zero = 0;
unsigned long long int var_17 = 13336269614955372027ULL;
unsigned long long int var_18 = 5333934954017751117ULL;
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
