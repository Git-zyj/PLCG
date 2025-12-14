#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned char var_4 = (unsigned char)25;
unsigned char var_7 = (unsigned char)133;
unsigned char var_9 = (unsigned char)82;
unsigned char var_12 = (unsigned char)145;
int zero = 0;
unsigned short var_15 = (unsigned short)54173;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)22719;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
