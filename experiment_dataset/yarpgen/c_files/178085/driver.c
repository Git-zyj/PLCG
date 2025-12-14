#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
long long int var_3 = -6194814836452174713LL;
_Bool var_10 = (_Bool)1;
short var_16 = (short)-31319;
int zero = 0;
unsigned short var_17 = (unsigned short)5304;
unsigned int var_18 = 1143961285U;
unsigned short var_19 = (unsigned short)12003;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
