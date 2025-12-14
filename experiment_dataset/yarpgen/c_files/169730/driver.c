#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10262078774494345896ULL;
short var_1 = (short)-21400;
signed char var_5 = (signed char)12;
short var_7 = (short)23350;
signed char var_9 = (signed char)-11;
short var_10 = (short)-5897;
unsigned short var_13 = (unsigned short)60236;
int var_16 = 2138510290;
int zero = 0;
short var_18 = (short)-18816;
signed char var_19 = (signed char)-113;
unsigned char var_20 = (unsigned char)244;
void init() {
}

void checksum() {
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
