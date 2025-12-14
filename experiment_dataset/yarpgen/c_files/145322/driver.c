#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5379760581481634094LL;
long long int var_3 = -359884700910274152LL;
signed char var_4 = (signed char)102;
short var_5 = (short)15832;
short var_6 = (short)-6330;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-105;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)14504;
signed char var_14 = (signed char)-7;
long long int var_15 = -1895395905694225564LL;
void init() {
}

void checksum() {
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
