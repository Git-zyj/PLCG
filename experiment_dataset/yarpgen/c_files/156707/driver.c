#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
signed char var_6 = (signed char)62;
signed char var_7 = (signed char)71;
unsigned long long int var_8 = 1114965977378131854ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 12431428901058188069ULL;
unsigned int var_14 = 1212738831U;
int zero = 0;
unsigned long long int var_18 = 7846337559610039103ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14717189269513946919ULL;
unsigned long long int var_21 = 11301950526705304975ULL;
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
