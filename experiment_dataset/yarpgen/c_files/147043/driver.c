#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 539660019U;
unsigned short var_5 = (unsigned short)32565;
long long int var_8 = -6079785927001252975LL;
unsigned long long int var_9 = 807099179687783345ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)58060;
short var_12 = (short)4411;
unsigned int var_13 = 1978610457U;
int zero = 0;
short var_14 = (short)1028;
unsigned char var_15 = (unsigned char)201;
unsigned int var_16 = 2493687364U;
long long int var_17 = 3461451718008628353LL;
void init() {
}

void checksum() {
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
