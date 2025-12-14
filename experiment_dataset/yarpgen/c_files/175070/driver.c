#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)59;
int var_6 = 1075942310;
short var_7 = (short)10423;
short var_9 = (short)2541;
long long int var_11 = 7819605484083437826LL;
unsigned char var_16 = (unsigned char)148;
long long int var_17 = 8512710657242188286LL;
int zero = 0;
long long int var_18 = -3844450616609905538LL;
signed char var_19 = (signed char)-3;
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
