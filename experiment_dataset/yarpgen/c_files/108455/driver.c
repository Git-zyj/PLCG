#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
int var_2 = -1947104634;
unsigned long long int var_3 = 6437907988051839222ULL;
unsigned int var_4 = 3043261365U;
unsigned long long int var_6 = 15538055934435333199ULL;
short var_8 = (short)-17414;
short var_9 = (short)7994;
unsigned short var_10 = (unsigned short)9465;
unsigned char var_11 = (unsigned char)115;
short var_12 = (short)-10543;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
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
