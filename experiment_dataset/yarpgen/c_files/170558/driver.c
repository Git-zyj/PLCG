#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1221000080;
unsigned char var_3 = (unsigned char)5;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)46670;
_Bool var_9 = (_Bool)1;
long long int var_11 = -3191784330797174251LL;
long long int var_13 = -8169858161580778404LL;
int var_15 = -1691853385;
long long int var_16 = -5776092063785488504LL;
long long int var_17 = -5395276666475630923LL;
int zero = 0;
unsigned short var_18 = (unsigned short)43650;
long long int var_19 = 5689957399337446774LL;
void init() {
}

void checksum() {
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
