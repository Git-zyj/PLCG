#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 198231721U;
long long int var_9 = 264488352924773806LL;
unsigned int var_13 = 1202649130U;
signed char var_16 = (signed char)51;
int zero = 0;
unsigned char var_18 = (unsigned char)181;
short var_19 = (short)-7157;
int var_20 = 2086161620;
unsigned int var_21 = 791209737U;
unsigned long long int var_22 = 13416286841461429619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
