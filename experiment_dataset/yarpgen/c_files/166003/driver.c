#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
signed char var_3 = (signed char)-73;
unsigned short var_4 = (unsigned short)20259;
long long int var_7 = 3784347106554923973LL;
long long int var_10 = 4356776906722112085LL;
signed char var_12 = (signed char)-41;
int var_14 = 1017401620;
signed char var_16 = (signed char)21;
signed char var_17 = (signed char)123;
int zero = 0;
long long int var_19 = 7787118015053869305LL;
long long int var_20 = -4130097569989591801LL;
long long int var_21 = 5475544873272809181LL;
int var_22 = -130295072;
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
