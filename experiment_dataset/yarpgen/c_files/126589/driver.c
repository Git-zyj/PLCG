#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 593927080;
short var_7 = (short)-20586;
int var_11 = 1046812892;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)15645;
unsigned int var_18 = 1598380961U;
unsigned char var_19 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
