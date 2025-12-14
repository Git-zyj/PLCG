#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29281;
unsigned long long int var_3 = 14621609457275693009ULL;
unsigned char var_4 = (unsigned char)62;
long long int var_6 = -5106345318384487241LL;
unsigned char var_7 = (unsigned char)108;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 6414517828600817958ULL;
long long int var_12 = 5546608001528033416LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
