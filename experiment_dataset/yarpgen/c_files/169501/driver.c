#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_18 = -1345887636;
short var_19 = (short)-29271;
int zero = 0;
unsigned char var_20 = (unsigned char)95;
long long int var_21 = 8286544066738670056LL;
void init() {
}

void checksum() {
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
