#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12606141471209742476ULL;
int var_3 = -612912195;
unsigned long long int var_4 = 1635372904940571947ULL;
unsigned long long int var_5 = 12692282362481029094ULL;
unsigned short var_11 = (unsigned short)15824;
int zero = 0;
unsigned short var_14 = (unsigned short)62154;
unsigned short var_15 = (unsigned short)49393;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
