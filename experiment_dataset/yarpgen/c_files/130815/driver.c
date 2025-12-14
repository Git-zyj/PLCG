#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)226;
int var_9 = 568775353;
signed char var_10 = (signed char)52;
unsigned char var_12 = (unsigned char)96;
unsigned short var_15 = (unsigned short)20896;
long long int var_17 = 8818976319671530691LL;
unsigned char var_19 = (unsigned char)129;
int zero = 0;
signed char var_20 = (signed char)118;
unsigned char var_21 = (unsigned char)168;
void init() {
}

void checksum() {
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
