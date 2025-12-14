#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
unsigned long long int var_2 = 7991939682823627957ULL;
unsigned char var_3 = (unsigned char)126;
_Bool var_5 = (_Bool)1;
long long int var_6 = 7997191390036825883LL;
signed char var_7 = (signed char)9;
unsigned int var_9 = 2789371788U;
unsigned short var_10 = (unsigned short)13376;
unsigned int var_11 = 2974584192U;
int zero = 0;
signed char var_12 = (signed char)41;
int var_13 = -593968703;
long long int var_14 = -7065560565155784706LL;
short var_15 = (short)-2323;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
