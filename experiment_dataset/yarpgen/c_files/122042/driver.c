#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-83;
long long int var_6 = -7544236861614400065LL;
unsigned long long int var_8 = 12909346216963109179ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_17 = (unsigned short)49882;
int zero = 0;
signed char var_20 = (signed char)76;
int var_21 = -1296637131;
signed char var_22 = (signed char)-87;
void init() {
}

void checksum() {
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
