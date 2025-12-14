#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28948;
long long int var_6 = -9053427449813570457LL;
unsigned char var_9 = (unsigned char)74;
unsigned char var_12 = (unsigned char)226;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = 1405967309;
signed char var_16 = (signed char)-69;
unsigned char var_17 = (unsigned char)6;
long long int var_18 = 6145687975064290700LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
