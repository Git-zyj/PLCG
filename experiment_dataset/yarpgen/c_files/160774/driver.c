#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)85;
unsigned int var_3 = 946776431U;
signed char var_7 = (signed char)-126;
unsigned char var_11 = (unsigned char)229;
unsigned short var_18 = (unsigned short)7585;
int zero = 0;
long long int var_19 = -8430579167171616946LL;
unsigned char var_20 = (unsigned char)16;
short var_21 = (short)12816;
unsigned short var_22 = (unsigned short)55477;
void init() {
}

void checksum() {
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
