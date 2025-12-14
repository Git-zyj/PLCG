#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63420;
unsigned long long int var_4 = 5398464899508406385ULL;
_Bool var_7 = (_Bool)1;
short var_9 = (short)23073;
int var_10 = 1796073838;
signed char var_11 = (signed char)42;
int zero = 0;
long long int var_16 = -4390904315804884068LL;
unsigned char var_17 = (unsigned char)80;
long long int var_18 = 1638170084131382980LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
