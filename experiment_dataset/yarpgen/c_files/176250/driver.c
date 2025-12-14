#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61164;
unsigned short var_1 = (unsigned short)55418;
short var_2 = (short)-2442;
short var_3 = (short)-14312;
long long int var_4 = 3045120602166828081LL;
short var_7 = (short)24068;
int var_8 = -389189607;
signed char var_9 = (signed char)17;
int zero = 0;
int var_10 = 232266056;
unsigned short var_11 = (unsigned short)20606;
long long int var_12 = -4619658511729979428LL;
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
