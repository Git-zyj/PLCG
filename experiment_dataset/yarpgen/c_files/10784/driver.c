#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3349106006097076271LL;
long long int var_2 = 3917701078245025960LL;
long long int var_4 = 8384941412164190965LL;
unsigned short var_10 = (unsigned short)59662;
unsigned int var_12 = 216453372U;
int var_15 = -139394246;
int zero = 0;
int var_17 = -1954095078;
unsigned char var_18 = (unsigned char)97;
long long int var_19 = 968328692803333672LL;
long long int var_20 = -1753631471819413501LL;
int var_21 = 703584166;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
