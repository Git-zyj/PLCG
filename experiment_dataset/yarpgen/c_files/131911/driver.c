#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8970418738020941080LL;
unsigned short var_9 = (unsigned short)34580;
unsigned short var_14 = (unsigned short)40418;
int zero = 0;
unsigned int var_19 = 2649348420U;
long long int var_20 = 7758242039139745477LL;
unsigned char var_21 = (unsigned char)166;
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
