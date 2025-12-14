#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6724;
long long int var_1 = 7182400006087902950LL;
long long int var_3 = -7002571193090795543LL;
short var_4 = (short)4351;
signed char var_5 = (signed char)90;
signed char var_7 = (signed char)82;
short var_12 = (short)-22430;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
long long int var_19 = 4869468305938391569LL;
unsigned short var_20 = (unsigned short)38231;
int var_21 = 309357464;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
