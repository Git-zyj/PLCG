#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12660;
signed char var_1 = (signed char)-60;
short var_2 = (short)1438;
signed char var_4 = (signed char)1;
long long int var_5 = 5441935355769631111LL;
short var_7 = (short)32111;
unsigned char var_8 = (unsigned char)78;
unsigned long long int var_9 = 13902892070108769987ULL;
unsigned char var_12 = (unsigned char)111;
short var_14 = (short)-30775;
unsigned char var_15 = (unsigned char)124;
int zero = 0;
int var_17 = -1919558225;
unsigned char var_18 = (unsigned char)82;
long long int var_19 = -5945871780392340223LL;
signed char var_20 = (signed char)-113;
unsigned char var_21 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
