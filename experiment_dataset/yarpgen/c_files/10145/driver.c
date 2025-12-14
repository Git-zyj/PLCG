#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3943076679U;
short var_4 = (short)6512;
unsigned int var_6 = 4218572218U;
short var_8 = (short)26696;
int var_9 = -178887696;
_Bool var_12 = (_Bool)0;
int var_15 = -1679842731;
int zero = 0;
long long int var_17 = 2921613172680445627LL;
short var_18 = (short)3454;
int var_19 = -905239555;
int var_20 = -744176439;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
