#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned short var_1 = (unsigned short)16090;
unsigned char var_3 = (unsigned char)148;
long long int var_4 = -406135745095879416LL;
long long int var_5 = -7336136130584420382LL;
unsigned char var_8 = (unsigned char)172;
int zero = 0;
signed char var_10 = (signed char)27;
unsigned short var_11 = (unsigned short)59728;
signed char var_12 = (signed char)122;
unsigned char var_13 = (unsigned char)40;
unsigned short var_14 = (unsigned short)15233;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
