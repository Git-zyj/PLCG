#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-62;
int var_2 = -151765595;
int var_5 = 1410509210;
short var_6 = (short)23267;
unsigned long long int var_8 = 12177170432402997105ULL;
long long int var_9 = -3921532864538372843LL;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)41107;
unsigned int var_18 = 1193167464U;
unsigned int var_19 = 4175011682U;
int zero = 0;
unsigned int var_20 = 1428638877U;
long long int var_21 = -2511279750450743421LL;
unsigned int var_22 = 2314235640U;
short var_23 = (short)32619;
signed char var_24 = (signed char)-28;
_Bool var_25 = (_Bool)0;
short var_26 = (short)5538;
unsigned char var_27 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
