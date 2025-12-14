#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
long long int var_5 = 6852595157963159751LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 454084491648495733LL;
unsigned char var_13 = (unsigned char)102;
long long int var_14 = -5494010187750226561LL;
long long int var_17 = -5636613110027825158LL;
int zero = 0;
signed char var_18 = (signed char)90;
unsigned char var_19 = (unsigned char)32;
void init() {
}

void checksum() {
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
