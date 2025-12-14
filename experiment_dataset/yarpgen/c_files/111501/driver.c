#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)143;
short var_4 = (short)14988;
short var_12 = (short)19657;
_Bool var_13 = (_Bool)1;
unsigned long long int var_18 = 12792733869573051764ULL;
int zero = 0;
signed char var_20 = (signed char)50;
signed char var_21 = (signed char)14;
long long int var_22 = -6091179068299239974LL;
unsigned short var_23 = (unsigned short)20721;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
