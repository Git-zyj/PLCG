#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)230;
long long int var_3 = 2988489219685717113LL;
short var_6 = (short)-10990;
unsigned char var_8 = (unsigned char)34;
signed char var_11 = (signed char)-17;
int zero = 0;
unsigned char var_12 = (unsigned char)97;
long long int var_13 = 5478932198328464346LL;
long long int var_14 = 3901430795323311992LL;
void init() {
}

void checksum() {
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
