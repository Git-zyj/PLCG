#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-18;
signed char var_4 = (signed char)-20;
unsigned long long int var_5 = 1069995830396856932ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2242202440U;
_Bool var_9 = (_Bool)0;
long long int var_10 = 7055577208945339361LL;
int zero = 0;
unsigned long long int var_11 = 5962152226213919155ULL;
long long int var_12 = 6751141709234552442LL;
long long int var_13 = -7978155659815498047LL;
long long int var_14 = -5889454571295092151LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
