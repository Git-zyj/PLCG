#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -850970146705426685LL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)212;
unsigned char var_10 = (unsigned char)103;
long long int var_11 = 2465372841306651145LL;
unsigned char var_13 = (unsigned char)140;
long long int var_14 = 2604918403271162004LL;
unsigned short var_16 = (unsigned short)55402;
unsigned int var_17 = 1701210078U;
int zero = 0;
signed char var_20 = (signed char)105;
short var_21 = (short)-11641;
signed char var_22 = (signed char)-59;
unsigned long long int var_23 = 6349549792616198762ULL;
signed char var_24 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
