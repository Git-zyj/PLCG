#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9041284474435668029ULL;
unsigned short var_1 = (unsigned short)58573;
unsigned char var_3 = (unsigned char)135;
unsigned short var_4 = (unsigned short)6242;
unsigned long long int var_5 = 2742823526711911476ULL;
unsigned char var_6 = (unsigned char)125;
unsigned long long int var_7 = 9884965987955046588ULL;
int zero = 0;
short var_10 = (short)-26733;
unsigned short var_11 = (unsigned short)54554;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
