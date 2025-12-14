#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)47231;
long long int var_3 = -533019819045703992LL;
long long int var_4 = -5648707151647372391LL;
long long int var_6 = 2848902051240302950LL;
short var_9 = (short)770;
unsigned short var_11 = (unsigned short)42014;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)8213;
int zero = 0;
short var_19 = (short)-2491;
unsigned short var_20 = (unsigned short)21845;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
