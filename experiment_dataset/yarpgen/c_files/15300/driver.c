#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
unsigned long long int var_6 = 14466500046363730092ULL;
short var_9 = (short)-30508;
signed char var_10 = (signed char)115;
short var_14 = (short)24488;
int zero = 0;
int var_18 = 114575207;
long long int var_19 = -8356936956558185786LL;
long long int var_20 = -5836739772829814824LL;
unsigned short var_21 = (unsigned short)34282;
void init() {
}

void checksum() {
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
