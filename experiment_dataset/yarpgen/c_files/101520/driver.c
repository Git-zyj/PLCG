#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -2475227521359126595LL;
unsigned long long int var_2 = 7185733353659637364ULL;
unsigned int var_3 = 3911009547U;
short var_4 = (short)28671;
long long int var_5 = -3099820897997124583LL;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)27;
int var_8 = 957374099;
unsigned short var_9 = (unsigned short)26205;
_Bool var_10 = (_Bool)0;
int var_11 = 351454507;
unsigned short var_12 = (unsigned short)55510;
unsigned long long int var_13 = 16263439747683794620ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2148675093600490316LL;
long long int var_17 = -4896161918568731206LL;
int zero = 0;
unsigned int var_18 = 86173984U;
int var_19 = -517261794;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)224;
unsigned char var_22 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
