#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16408722921237576865ULL;
unsigned short var_1 = (unsigned short)27237;
unsigned short var_4 = (unsigned short)29029;
signed char var_5 = (signed char)-28;
unsigned long long int var_6 = 1656184413408078332ULL;
signed char var_9 = (signed char)91;
_Bool var_10 = (_Bool)1;
long long int var_12 = -6560399436782443608LL;
long long int var_16 = 2596611979723755299LL;
short var_17 = (short)11847;
int zero = 0;
short var_18 = (short)-27138;
unsigned long long int var_19 = 18331119138112449457ULL;
signed char var_20 = (signed char)97;
unsigned long long int var_21 = 456493436208053527ULL;
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
