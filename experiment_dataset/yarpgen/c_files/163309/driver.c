#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)177;
unsigned int var_3 = 1025356857U;
unsigned int var_4 = 1020778346U;
unsigned long long int var_6 = 271121344721638800ULL;
unsigned char var_7 = (unsigned char)204;
unsigned short var_8 = (unsigned short)41116;
unsigned char var_9 = (unsigned char)161;
unsigned short var_10 = (unsigned short)51540;
unsigned char var_16 = (unsigned char)8;
int zero = 0;
unsigned char var_20 = (unsigned char)233;
unsigned long long int var_21 = 11931468937880708393ULL;
unsigned char var_22 = (unsigned char)62;
short var_23 = (short)-4166;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
