#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13818598821872407984ULL;
short var_1 = (short)-20646;
int var_5 = -1832143953;
unsigned long long int var_8 = 7685267020686357692ULL;
unsigned int var_10 = 2669164877U;
unsigned int var_12 = 3537517824U;
int zero = 0;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_14 = 13827766959112877386ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 4261205475U;
short var_17 = (short)-10430;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
