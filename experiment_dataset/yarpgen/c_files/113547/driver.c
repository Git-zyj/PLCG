#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25661;
short var_1 = (short)4759;
long long int var_2 = -4688923962778691799LL;
short var_5 = (short)28140;
short var_6 = (short)784;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
long long int var_11 = -8022744950818696612LL;
long long int var_12 = 1679689982776466261LL;
short var_13 = (short)18733;
int zero = 0;
long long int var_14 = 2750678316578261288LL;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
short var_17 = (short)26187;
long long int var_18 = 638458310129829206LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
