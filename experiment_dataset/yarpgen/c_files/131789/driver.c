#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2510357641278183285LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5197181426947702054LL;
short var_5 = (short)31169;
unsigned long long int var_6 = 855224139731739744ULL;
signed char var_7 = (signed char)-37;
unsigned long long int var_8 = 9911748198464087228ULL;
_Bool var_9 = (_Bool)0;
long long int var_11 = 8003362670200026951LL;
unsigned long long int var_12 = 13400550431492300329ULL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -4230700982077414852LL;
unsigned long long int var_17 = 210995377254649621ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1880501485463543447LL;
short var_21 = (short)3772;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
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
