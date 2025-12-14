#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39646;
long long int var_2 = -7511497864046251265LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)24558;
long long int var_10 = -1826853653452959079LL;
signed char var_14 = (signed char)-51;
long long int var_17 = -4123831172786877337LL;
int zero = 0;
long long int var_18 = 5494882875208740244LL;
long long int var_19 = -3325538483039856249LL;
long long int var_20 = 2004559032002572615LL;
long long int var_21 = -1622305024571441302LL;
unsigned short var_22 = (unsigned short)4671;
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
