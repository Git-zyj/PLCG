#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4756873704973270135LL;
short var_9 = (short)26681;
unsigned char var_10 = (unsigned char)215;
_Bool var_11 = (_Bool)0;
signed char var_15 = (signed char)-1;
long long int var_16 = 186999509119410848LL;
int zero = 0;
signed char var_20 = (signed char)67;
unsigned int var_21 = 1234756037U;
long long int var_22 = -788510793029797411LL;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
