#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -568504789;
int var_3 = -1291871607;
int var_4 = -992677154;
unsigned long long int var_6 = 6394570858108551741ULL;
_Bool var_9 = (_Bool)0;
short var_13 = (short)-18248;
int var_14 = -1054642851;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 11641498959542590532ULL;
signed char var_20 = (signed char)88;
short var_21 = (short)10834;
long long int var_22 = 16067971906348957LL;
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
