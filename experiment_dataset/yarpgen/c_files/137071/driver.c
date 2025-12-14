#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14294419520734665904ULL;
unsigned short var_2 = (unsigned short)38023;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)56383;
unsigned short var_6 = (unsigned short)27329;
unsigned long long int var_8 = 16331669890626298826ULL;
unsigned char var_9 = (unsigned char)131;
int zero = 0;
unsigned short var_11 = (unsigned short)59532;
signed char var_12 = (signed char)22;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
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
