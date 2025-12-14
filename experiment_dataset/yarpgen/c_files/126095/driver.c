#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3851289110423869648ULL;
short var_2 = (short)31655;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)54;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = 870381217;
signed char var_11 = (signed char)-126;
int zero = 0;
unsigned short var_12 = (unsigned short)53477;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)28182;
void init() {
}

void checksum() {
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
