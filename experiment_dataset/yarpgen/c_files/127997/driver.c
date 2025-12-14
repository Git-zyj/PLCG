#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)53850;
short var_6 = (short)-17746;
long long int var_11 = -5740262576261673366LL;
short var_13 = (short)-12995;
int zero = 0;
short var_19 = (short)-20553;
short var_20 = (short)-31238;
unsigned char var_21 = (unsigned char)41;
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
