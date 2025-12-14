#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)5311;
signed char var_7 = (signed char)-19;
long long int var_8 = -6825307958477139118LL;
short var_9 = (short)26792;
int zero = 0;
unsigned short var_10 = (unsigned short)39418;
signed char var_11 = (signed char)52;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
