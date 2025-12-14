#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 4254193352U;
short var_6 = (short)-29007;
long long int var_7 = -1977705121699811929LL;
signed char var_9 = (signed char)-18;
signed char var_10 = (signed char)61;
unsigned short var_12 = (unsigned short)40449;
short var_13 = (short)-32082;
int zero = 0;
unsigned char var_14 = (unsigned char)79;
int var_15 = -1345370018;
unsigned int var_16 = 4258523946U;
signed char var_17 = (signed char)-87;
unsigned short var_18 = (unsigned short)57271;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
