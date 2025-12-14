#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8378865271850476121LL;
_Bool var_3 = (_Bool)0;
int var_5 = 449632622;
long long int var_6 = -7706921379286889307LL;
unsigned char var_7 = (unsigned char)172;
unsigned int var_8 = 3314114107U;
long long int var_9 = 8398952870764052895LL;
unsigned long long int var_10 = 13578464630059719153ULL;
int var_13 = -726397412;
int zero = 0;
long long int var_14 = -7623442096357113505LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_17 = -8945376348379942422LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
