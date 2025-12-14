#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)118;
unsigned int var_7 = 4221865230U;
unsigned int var_8 = 551497246U;
unsigned int var_12 = 4199584000U;
unsigned short var_15 = (unsigned short)10862;
int zero = 0;
long long int var_18 = -7970848706240811235LL;
unsigned char var_19 = (unsigned char)70;
long long int var_20 = 4822989921478562110LL;
short var_21 = (short)-16368;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
