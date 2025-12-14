#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21338;
unsigned long long int var_4 = 11365959239000034420ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)41817;
unsigned long long int var_9 = 4120396347463003613ULL;
unsigned long long int var_13 = 9334145923003632074ULL;
short var_14 = (short)15399;
int zero = 0;
unsigned char var_18 = (unsigned char)147;
unsigned long long int var_19 = 11714905745595036536ULL;
void init() {
}

void checksum() {
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
