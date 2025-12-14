#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)152;
long long int var_7 = 6667977166193296386LL;
signed char var_8 = (signed char)14;
short var_12 = (short)15553;
int zero = 0;
short var_17 = (short)32208;
unsigned char var_18 = (unsigned char)68;
unsigned short var_19 = (unsigned short)40460;
signed char var_20 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
