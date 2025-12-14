#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned char var_1 = (unsigned char)220;
unsigned char var_3 = (unsigned char)61;
long long int var_6 = -8761558689842586232LL;
unsigned short var_9 = (unsigned short)61225;
unsigned char var_11 = (unsigned char)22;
int zero = 0;
signed char var_12 = (signed char)-106;
signed char var_13 = (signed char)68;
int var_14 = 205606832;
unsigned short var_15 = (unsigned short)54194;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
