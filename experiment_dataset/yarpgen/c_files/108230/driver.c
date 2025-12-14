#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1164267309;
unsigned short var_4 = (unsigned short)34823;
long long int var_6 = 4868200105154510153LL;
unsigned long long int var_7 = 15108561502697342415ULL;
unsigned short var_12 = (unsigned short)18374;
long long int var_13 = 872008527218097408LL;
unsigned int var_14 = 2512967390U;
int zero = 0;
unsigned long long int var_18 = 1109989846681525018ULL;
unsigned long long int var_19 = 14179713928010185007ULL;
long long int var_20 = -5606870852762656995LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
