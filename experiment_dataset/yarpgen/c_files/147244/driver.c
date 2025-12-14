#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
int var_3 = -693316169;
unsigned long long int var_4 = 6706282775734321462ULL;
unsigned long long int var_5 = 16036454932693594546ULL;
unsigned char var_6 = (unsigned char)140;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13869701562952152750ULL;
int var_9 = 2044164670;
unsigned long long int var_10 = 13030196908305412335ULL;
int zero = 0;
unsigned long long int var_11 = 17278544247174974960ULL;
unsigned long long int var_12 = 12876692605108678966ULL;
unsigned char var_13 = (unsigned char)118;
unsigned int var_14 = 2436055664U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
