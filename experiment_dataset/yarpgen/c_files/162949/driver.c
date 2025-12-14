#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-126;
unsigned long long int var_5 = 17846741166253248079ULL;
_Bool var_10 = (_Bool)1;
long long int var_12 = 7880491358453261791LL;
int var_13 = 1450120024;
unsigned char var_16 = (unsigned char)10;
short var_19 = (short)12504;
int zero = 0;
signed char var_20 = (signed char)-30;
signed char var_21 = (signed char)-102;
unsigned char var_22 = (unsigned char)151;
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
