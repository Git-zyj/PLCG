#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1866714565481926945ULL;
int var_1 = 359132547;
unsigned char var_2 = (unsigned char)137;
long long int var_3 = 2225535422396626319LL;
signed char var_4 = (signed char)126;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1352825265U;
long long int var_7 = -8184548028014277346LL;
unsigned long long int var_8 = 2977520837618402974ULL;
unsigned char var_9 = (unsigned char)96;
unsigned char var_10 = (unsigned char)197;
short var_11 = (short)6656;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)40728;
signed char var_14 = (signed char)-34;
short var_15 = (short)-13685;
unsigned long long int var_16 = 15495186633783168097ULL;
int zero = 0;
unsigned long long int var_17 = 10086358378463411370ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)13607;
short var_20 = (short)-21079;
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
