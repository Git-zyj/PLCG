#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_6 = 2418348744U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)88;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-86;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18076657061439804087ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -7333471618245253165LL;
int var_19 = 622127770;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2193365179904675486LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
