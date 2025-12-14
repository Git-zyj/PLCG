#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)20;
unsigned long long int var_9 = 9790392647140940790ULL;
signed char var_13 = (signed char)53;
int zero = 0;
long long int var_19 = 6650278359809227650LL;
unsigned int var_20 = 1270231070U;
long long int var_21 = -896976807394267898LL;
unsigned long long int var_22 = 641802528452916352ULL;
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
