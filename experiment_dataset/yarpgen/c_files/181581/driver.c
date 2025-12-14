#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned char var_4 = (unsigned char)23;
unsigned long long int var_5 = 12258402394186954248ULL;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3410395191U;
short var_12 = (short)2089;
int zero = 0;
unsigned long long int var_15 = 16578525539085454173ULL;
unsigned int var_16 = 3656051925U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)37352;
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
