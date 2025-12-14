#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6469592346240722603LL;
unsigned long long int var_6 = 3521161057025214130ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 8746210369758876735ULL;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
int var_10 = 955209442;
short var_11 = (short)-28055;
int var_12 = -1989948805;
short var_13 = (short)22698;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
