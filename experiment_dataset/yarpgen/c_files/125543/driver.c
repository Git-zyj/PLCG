#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10493473221138766361ULL;
long long int var_1 = -3657519564690974088LL;
long long int var_2 = 8527691915071338053LL;
unsigned char var_3 = (unsigned char)41;
signed char var_4 = (signed char)87;
short var_5 = (short)30824;
signed char var_7 = (signed char)22;
unsigned long long int var_10 = 14722556660512156199ULL;
int zero = 0;
unsigned long long int var_11 = 13707692554982279588ULL;
unsigned char var_12 = (unsigned char)140;
short var_13 = (short)15349;
unsigned char var_14 = (unsigned char)213;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
