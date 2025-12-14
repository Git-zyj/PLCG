#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2091816399173315613LL;
unsigned int var_1 = 201539462U;
unsigned short var_2 = (unsigned short)9128;
int var_3 = -1839272254;
unsigned short var_4 = (unsigned short)32755;
unsigned char var_5 = (unsigned char)37;
unsigned short var_6 = (unsigned short)24531;
unsigned int var_8 = 2768329674U;
long long int var_9 = -3404477813024710052LL;
int zero = 0;
unsigned long long int var_10 = 13865453385151445558ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -646890342;
long long int var_13 = 3428632733630479595LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
