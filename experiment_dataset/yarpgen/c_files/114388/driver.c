#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
_Bool var_2 = (_Bool)1;
int var_4 = -490622706;
long long int var_6 = 8339615155782809353LL;
long long int var_8 = -6491203798915115122LL;
int var_9 = -648346065;
long long int var_12 = 1931729066608037034LL;
unsigned long long int var_14 = 7311096696857131069ULL;
long long int var_15 = 5738526443716145541LL;
unsigned long long int var_16 = 14858725200060111571ULL;
int zero = 0;
int var_18 = -77205620;
unsigned long long int var_19 = 613547395605237075ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
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
