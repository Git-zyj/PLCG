#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
unsigned char var_3 = (unsigned char)113;
unsigned long long int var_11 = 16091285166282302391ULL;
unsigned long long int var_12 = 6774431465536239843ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)34335;
unsigned long long int var_20 = 1280913891194123883ULL;
short var_21 = (short)-24332;
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
