#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15530095355307037801ULL;
long long int var_1 = -8299325148962799608LL;
long long int var_4 = -2405160481390089059LL;
int var_5 = -1707614773;
signed char var_10 = (signed char)-70;
unsigned int var_11 = 2934112427U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 15536053520030340968ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)6;
long long int var_16 = 7821793012208189752LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13517115918765473811ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
