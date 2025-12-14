#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 527579624045974967ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)24955;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 17289249300110943192ULL;
int zero = 0;
long long int var_15 = 975489599975183967LL;
short var_16 = (short)-29834;
long long int var_17 = -2625935336313161389LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
