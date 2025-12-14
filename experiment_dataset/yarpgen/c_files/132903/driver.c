#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)181;
long long int var_8 = -3819452628602950981LL;
int zero = 0;
long long int var_10 = 1245747075678863431LL;
unsigned short var_11 = (unsigned short)59971;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
