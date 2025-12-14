#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4513529814084136327LL;
long long int var_2 = 6561095210881379222LL;
signed char var_3 = (signed char)101;
signed char var_5 = (signed char)53;
short var_7 = (short)-14683;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)52;
short var_13 = (short)-3456;
short var_14 = (short)25775;
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
