#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
int var_1 = 474602914;
int var_2 = -382493897;
short var_3 = (short)2717;
int var_4 = -1482213624;
short var_5 = (short)-7675;
unsigned char var_6 = (unsigned char)86;
unsigned char var_7 = (unsigned char)204;
long long int var_8 = 2845526600666583207LL;
long long int var_9 = 9030104293604165000LL;
long long int var_10 = -3899444754151820418LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4400536190141484539LL;
unsigned short var_13 = (unsigned short)56561;
signed char var_14 = (signed char)-29;
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
