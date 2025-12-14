#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5989131030923570606LL;
unsigned short var_2 = (unsigned short)14536;
_Bool var_3 = (_Bool)1;
long long int var_6 = 5355181401604309897LL;
unsigned int var_9 = 925670500U;
short var_10 = (short)-32579;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)18226;
unsigned long long int var_20 = 5229548755759400559ULL;
long long int var_21 = 7857424585852477913LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
