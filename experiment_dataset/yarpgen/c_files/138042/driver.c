#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1494035829956210896LL;
long long int var_3 = -7864908411435583724LL;
unsigned char var_4 = (unsigned char)222;
unsigned char var_6 = (unsigned char)163;
long long int var_8 = -554127136657837807LL;
unsigned short var_9 = (unsigned short)1756;
unsigned short var_12 = (unsigned short)15396;
long long int var_13 = -7534403074176666714LL;
int zero = 0;
signed char var_14 = (signed char)25;
long long int var_15 = 4137748976071835513LL;
void init() {
}

void checksum() {
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
