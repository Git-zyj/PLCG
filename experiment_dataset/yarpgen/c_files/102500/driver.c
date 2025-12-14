#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
long long int var_4 = 6798508685715141116LL;
int var_7 = -363836583;
unsigned int var_8 = 1330603943U;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
unsigned int var_20 = 2432404114U;
signed char var_21 = (signed char)25;
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
