#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4041159788210408092ULL;
long long int var_3 = -8414689926901497176LL;
_Bool var_4 = (_Bool)1;
int var_5 = 1903989808;
int var_6 = -465049876;
int var_7 = -1013923530;
unsigned int var_8 = 1657928460U;
unsigned int var_9 = 1222159520U;
int zero = 0;
unsigned long long int var_13 = 2872399802933385755ULL;
int var_14 = -1798432915;
long long int var_15 = 7355643912862832916LL;
unsigned int var_16 = 3173101249U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
