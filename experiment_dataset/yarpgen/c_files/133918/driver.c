#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)105;
signed char var_2 = (signed char)117;
unsigned short var_4 = (unsigned short)59061;
_Bool var_7 = (_Bool)0;
int var_8 = -678435732;
unsigned short var_10 = (unsigned short)6221;
int var_11 = -1109770280;
short var_12 = (short)22834;
signed char var_14 = (signed char)5;
signed char var_15 = (signed char)-77;
int zero = 0;
short var_17 = (short)25630;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
