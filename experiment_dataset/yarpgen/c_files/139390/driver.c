#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned char var_4 = (unsigned char)111;
unsigned long long int var_7 = 5818712757962173070ULL;
unsigned short var_8 = (unsigned short)7251;
short var_10 = (short)6702;
signed char var_15 = (signed char)-24;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8222928130519263154ULL;
unsigned char var_18 = (unsigned char)189;
signed char var_19 = (signed char)-67;
void init() {
}

void checksum() {
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
