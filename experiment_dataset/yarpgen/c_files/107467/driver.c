#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)51628;
unsigned short var_8 = (unsigned short)59715;
signed char var_10 = (signed char)-37;
signed char var_16 = (signed char)122;
int zero = 0;
signed char var_19 = (signed char)5;
signed char var_20 = (signed char)-87;
unsigned int var_21 = 2864245959U;
long long int var_22 = 4834356830960352203LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
