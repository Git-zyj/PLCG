#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned short var_3 = (unsigned short)25875;
signed char var_4 = (signed char)53;
long long int var_5 = 7837738899129713623LL;
unsigned char var_10 = (unsigned char)50;
short var_12 = (short)26243;
int zero = 0;
long long int var_19 = -1842006369220200665LL;
signed char var_20 = (signed char)45;
unsigned short var_21 = (unsigned short)43571;
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
