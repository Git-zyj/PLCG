#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48725;
unsigned short var_2 = (unsigned short)20837;
unsigned short var_4 = (unsigned short)39521;
unsigned short var_8 = (unsigned short)2834;
unsigned char var_9 = (unsigned char)150;
unsigned short var_10 = (unsigned short)40229;
unsigned char var_11 = (unsigned char)90;
short var_12 = (short)-4800;
int zero = 0;
int var_13 = 1095699041;
signed char var_14 = (signed char)4;
unsigned short var_15 = (unsigned short)34664;
short var_16 = (short)-14187;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
