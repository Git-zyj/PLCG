#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1117483976;
long long int var_5 = -6902287701236666993LL;
unsigned long long int var_8 = 13671904961503320757ULL;
unsigned long long int var_10 = 12728535225370419266ULL;
unsigned int var_11 = 2530820024U;
unsigned short var_15 = (unsigned short)55510;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3967409428U;
unsigned long long int var_22 = 10814492645559912565ULL;
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
