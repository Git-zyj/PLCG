#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -163368329;
int var_1 = 1434746231;
_Bool var_5 = (_Bool)0;
short var_8 = (short)4318;
_Bool var_9 = (_Bool)1;
long long int var_11 = 7386570433510058739LL;
unsigned int var_13 = 2940776073U;
unsigned short var_16 = (unsigned short)23736;
int zero = 0;
short var_20 = (short)-7990;
unsigned short var_21 = (unsigned short)3986;
signed char var_22 = (signed char)90;
void init() {
}

void checksum() {
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
