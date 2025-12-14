#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -531775567;
unsigned int var_2 = 2209776740U;
unsigned int var_7 = 2076755591U;
unsigned int var_8 = 2411869664U;
signed char var_13 = (signed char)-124;
unsigned char var_17 = (unsigned char)115;
long long int var_18 = 710089564838146145LL;
int zero = 0;
int var_19 = 1752060121;
short var_20 = (short)26933;
void init() {
}

void checksum() {
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
