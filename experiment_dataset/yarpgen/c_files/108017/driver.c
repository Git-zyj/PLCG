#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3267657256425235529LL;
short var_2 = (short)20828;
unsigned char var_3 = (unsigned char)229;
unsigned short var_6 = (unsigned short)39918;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5517485006201988280ULL;
unsigned int var_10 = 2305052732U;
int zero = 0;
unsigned char var_12 = (unsigned char)52;
short var_13 = (short)7690;
long long int var_14 = 3942397715190340602LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
