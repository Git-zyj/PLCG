#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17856;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-69;
short var_7 = (short)-9252;
unsigned short var_8 = (unsigned short)39714;
int zero = 0;
long long int var_10 = -5198080728743783449LL;
long long int var_11 = 3276632892918477070LL;
long long int var_12 = 4081927736817631636LL;
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
