#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 47576586;
unsigned char var_2 = (unsigned char)93;
unsigned long long int var_7 = 6670252920325168781ULL;
signed char var_9 = (signed char)1;
int zero = 0;
signed char var_14 = (signed char)-122;
signed char var_15 = (signed char)(-127 - 1);
unsigned short var_16 = (unsigned short)51135;
signed char var_17 = (signed char)89;
int var_18 = -465377084;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
