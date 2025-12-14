#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7416991307178525458LL;
unsigned char var_4 = (unsigned char)4;
unsigned int var_5 = 804930721U;
long long int var_6 = -8551112548192946369LL;
unsigned short var_7 = (unsigned short)63866;
unsigned int var_8 = 2717814874U;
long long int var_9 = -6663752321515559785LL;
int zero = 0;
signed char var_10 = (signed char)27;
unsigned char var_11 = (unsigned char)28;
unsigned int var_12 = 2665723346U;
unsigned int var_13 = 1007665273U;
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
