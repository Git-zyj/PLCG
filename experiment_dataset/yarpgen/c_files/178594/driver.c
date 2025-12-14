#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
short var_2 = (short)5945;
short var_4 = (short)18543;
_Bool var_9 = (_Bool)0;
unsigned short var_15 = (unsigned short)40317;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-4403;
signed char var_18 = (signed char)-40;
signed char var_19 = (signed char)6;
short var_20 = (short)185;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
