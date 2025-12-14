#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1054376473U;
long long int var_5 = -3946951741057223502LL;
signed char var_9 = (signed char)-60;
long long int var_10 = 8512000298884315966LL;
unsigned short var_11 = (unsigned short)45880;
unsigned long long int var_14 = 17539829145759168297ULL;
unsigned int var_15 = 1488498812U;
short var_18 = (short)16648;
unsigned char var_19 = (unsigned char)89;
int zero = 0;
unsigned char var_20 = (unsigned char)200;
unsigned short var_21 = (unsigned short)6238;
unsigned char var_22 = (unsigned char)148;
void init() {
}

void checksum() {
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
