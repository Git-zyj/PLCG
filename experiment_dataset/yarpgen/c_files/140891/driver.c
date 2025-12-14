#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
short var_1 = (short)25634;
unsigned long long int var_2 = 1742699376900290953ULL;
signed char var_6 = (signed char)-53;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)242;
int zero = 0;
short var_10 = (short)8644;
short var_11 = (short)-20008;
long long int var_12 = -8787382318425587204LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
