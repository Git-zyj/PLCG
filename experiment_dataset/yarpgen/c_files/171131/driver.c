#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4460348984594188716LL;
long long int var_5 = 7604436660701614710LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)125;
unsigned char var_9 = (unsigned char)235;
unsigned int var_10 = 239031924U;
unsigned int var_13 = 384736589U;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = -2484165027744306699LL;
int zero = 0;
long long int var_20 = -3404561884727468134LL;
signed char var_21 = (signed char)7;
unsigned short var_22 = (unsigned short)52757;
void init() {
}

void checksum() {
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
