#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3130;
long long int var_4 = -4340926143616302931LL;
int var_7 = -772177751;
unsigned short var_9 = (unsigned short)26987;
int var_13 = -28707778;
long long int var_16 = -7595948985603364861LL;
int zero = 0;
long long int var_19 = 4244574733933432304LL;
short var_20 = (short)-10798;
unsigned short var_21 = (unsigned short)11654;
long long int var_22 = -5336660466034457601LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
