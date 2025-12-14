#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)71;
long long int var_10 = -9023574589206817157LL;
signed char var_16 = (signed char)64;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3731813355U;
unsigned short var_20 = (unsigned short)20816;
signed char var_21 = (signed char)127;
void init() {
}

void checksum() {
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
