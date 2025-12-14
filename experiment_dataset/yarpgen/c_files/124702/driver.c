#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)15852;
unsigned char var_8 = (unsigned char)26;
short var_9 = (short)-284;
unsigned long long int var_10 = 4607372078585451102ULL;
unsigned long long int var_12 = 15443377660452365140ULL;
short var_13 = (short)10186;
int zero = 0;
unsigned char var_16 = (unsigned char)165;
unsigned long long int var_17 = 3937963195643026665ULL;
unsigned long long int var_18 = 9069946313672925460ULL;
unsigned short var_19 = (unsigned short)32919;
unsigned char var_20 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
