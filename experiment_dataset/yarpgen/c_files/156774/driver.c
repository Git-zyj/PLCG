#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
unsigned char var_1 = (unsigned char)152;
long long int var_2 = 3325089153419761564LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-55;
unsigned long long int var_6 = 17204450277606124250ULL;
int var_8 = 143008487;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-30858;
unsigned int var_16 = 3305875932U;
unsigned long long int var_17 = 14422457891299418489ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
