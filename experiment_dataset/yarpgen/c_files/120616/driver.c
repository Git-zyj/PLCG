#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-63;
unsigned short var_1 = (unsigned short)63621;
unsigned short var_2 = (unsigned short)38325;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)165;
signed char var_10 = (signed char)-13;
unsigned long long int var_11 = 17283754983297356383ULL;
unsigned char var_13 = (unsigned char)227;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)25339;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
