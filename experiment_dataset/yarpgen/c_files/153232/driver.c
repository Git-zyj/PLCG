#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)89;
unsigned long long int var_6 = 3287174379548863139ULL;
unsigned long long int var_7 = 10678475991895513206ULL;
long long int var_9 = 3937168934632594388LL;
signed char var_10 = (signed char)54;
long long int var_11 = -2330617296938081583LL;
long long int var_12 = -4165310273219012438LL;
long long int var_14 = -6121668810997756909LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = 1028080874347050569LL;
int zero = 0;
unsigned long long int var_19 = 16993508736436024216ULL;
unsigned long long int var_20 = 14904814379573725333ULL;
int var_21 = -876276496;
unsigned char var_22 = (unsigned char)96;
unsigned long long int var_23 = 5035989577770655795ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
