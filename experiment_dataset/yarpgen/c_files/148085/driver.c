#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)89;
short var_5 = (short)32724;
unsigned long long int var_6 = 3497123503936797465ULL;
unsigned short var_9 = (unsigned short)28115;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 566907973U;
unsigned long long int var_18 = 942239195299199226ULL;
long long int var_19 = -7495789104030652013LL;
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
