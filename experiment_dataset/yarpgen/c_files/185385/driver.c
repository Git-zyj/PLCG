#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4491598911009513719LL;
signed char var_1 = (signed char)-105;
_Bool var_2 = (_Bool)0;
short var_4 = (short)4319;
unsigned long long int var_6 = 6020223012596152031ULL;
unsigned short var_7 = (unsigned short)33053;
long long int var_8 = 4266540100842369652LL;
unsigned char var_10 = (unsigned char)254;
long long int var_11 = 7433018016655953943LL;
int zero = 0;
unsigned char var_17 = (unsigned char)21;
long long int var_18 = -1534679302343537250LL;
long long int var_19 = 1587391401665507075LL;
int var_20 = 1508557438;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
