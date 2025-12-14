#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4742394281959591278LL;
unsigned long long int var_1 = 15299500322209542525ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_14 = 16553008962226184523ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 340340805U;
short var_21 = (short)26464;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
