#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3731820602391076080LL;
unsigned char var_5 = (unsigned char)90;
long long int var_6 = 4624959915165564178LL;
unsigned char var_7 = (unsigned char)35;
signed char var_8 = (signed char)-67;
unsigned short var_10 = (unsigned short)27695;
int zero = 0;
unsigned short var_12 = (unsigned short)61733;
unsigned short var_13 = (unsigned short)29589;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
