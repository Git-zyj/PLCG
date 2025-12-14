#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = 3537154895056880046LL;
unsigned long long int var_4 = 16349872408403831740ULL;
long long int var_5 = -3388779576336708003LL;
unsigned int var_6 = 3582812690U;
unsigned char var_9 = (unsigned char)56;
unsigned int var_11 = 4065968675U;
short var_13 = (short)31153;
int var_14 = 623183764;
unsigned long long int var_15 = 10136157638553789452ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)50619;
int zero = 0;
short var_18 = (short)-1405;
long long int var_19 = 728818828432242101LL;
signed char var_20 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
