#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)142;
unsigned long long int var_3 = 11258182701561103494ULL;
long long int var_5 = -5344238161382576546LL;
signed char var_6 = (signed char)89;
unsigned char var_8 = (unsigned char)109;
int var_10 = 375062348;
int var_11 = 30479660;
int zero = 0;
short var_12 = (short)-15283;
int var_13 = 23707553;
int var_14 = 1104613878;
unsigned int var_15 = 523818335U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
