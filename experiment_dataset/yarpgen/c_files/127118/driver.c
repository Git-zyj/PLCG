#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5467943922557257545LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8672779079747366688LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-126;
signed char var_7 = (signed char)-47;
unsigned short var_10 = (unsigned short)13886;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)34;
signed char var_16 = (signed char)10;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
long long int var_19 = -2176862509861864837LL;
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
