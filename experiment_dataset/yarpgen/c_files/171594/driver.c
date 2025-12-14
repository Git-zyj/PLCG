#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)46;
signed char var_6 = (signed char)48;
unsigned char var_7 = (unsigned char)71;
unsigned short var_11 = (unsigned short)46448;
signed char var_12 = (signed char)-50;
long long int var_13 = -3263039753644599078LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 677803828;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
