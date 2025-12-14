#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1869252809;
unsigned long long int var_1 = 16785704139962818338ULL;
long long int var_3 = 3446344446031854701LL;
unsigned short var_4 = (unsigned short)44741;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)39;
unsigned char var_10 = (unsigned char)30;
unsigned char var_11 = (unsigned char)93;
int var_12 = -1621792048;
unsigned int var_13 = 1658793752U;
unsigned char var_14 = (unsigned char)241;
int zero = 0;
long long int var_15 = -9123973229885353344LL;
short var_16 = (short)-12485;
unsigned short var_17 = (unsigned short)33145;
unsigned long long int var_18 = 9307151883474870118ULL;
long long int var_19 = 2351163386910266740LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
