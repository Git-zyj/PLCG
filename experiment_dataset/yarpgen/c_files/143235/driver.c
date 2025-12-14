#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)55372;
signed char var_3 = (signed char)-82;
unsigned short var_5 = (unsigned short)22646;
signed char var_6 = (signed char)-42;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-73;
unsigned long long int var_14 = 1345888452679749214ULL;
unsigned long long int var_15 = 12146378826513704016ULL;
signed char var_17 = (signed char)71;
int zero = 0;
long long int var_20 = 7684523055013302963LL;
signed char var_21 = (signed char)-9;
long long int var_22 = -8101389693241420820LL;
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
