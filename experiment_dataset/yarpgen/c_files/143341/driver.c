#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12256913039892902877ULL;
_Bool var_5 = (_Bool)1;
short var_7 = (short)16675;
unsigned short var_10 = (unsigned short)37813;
long long int var_11 = 5499981337152101199LL;
int zero = 0;
long long int var_17 = 395149903023651135LL;
short var_18 = (short)21572;
short var_19 = (short)2614;
void init() {
}

void checksum() {
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
