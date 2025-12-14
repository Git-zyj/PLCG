#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 667123825713572303ULL;
unsigned char var_10 = (unsigned char)47;
signed char var_13 = (signed char)96;
unsigned char var_14 = (unsigned char)82;
int var_15 = 848543883;
int zero = 0;
int var_18 = -295580024;
unsigned char var_19 = (unsigned char)176;
unsigned long long int var_20 = 12008461309475067333ULL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
