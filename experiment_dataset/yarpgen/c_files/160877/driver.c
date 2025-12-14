#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1389698457;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 72699470442084772ULL;
signed char var_14 = (signed char)73;
long long int var_15 = -1587752715021280056LL;
int zero = 0;
signed char var_18 = (signed char)-14;
unsigned int var_19 = 1680403406U;
unsigned long long int var_20 = 4244104795960066232ULL;
signed char var_21 = (signed char)-18;
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
