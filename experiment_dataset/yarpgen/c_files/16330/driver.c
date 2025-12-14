#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7577448057857152919ULL;
short var_7 = (short)11589;
signed char var_8 = (signed char)57;
unsigned char var_10 = (unsigned char)146;
unsigned char var_11 = (unsigned char)201;
long long int var_17 = 3318585803514288923LL;
int zero = 0;
signed char var_18 = (signed char)-90;
unsigned char var_19 = (unsigned char)187;
signed char var_20 = (signed char)35;
long long int var_21 = -8009779178357656797LL;
long long int var_22 = 2907549498598458621LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
