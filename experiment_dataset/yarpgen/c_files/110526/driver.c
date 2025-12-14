#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14047354620506570222ULL;
signed char var_1 = (signed char)50;
unsigned char var_6 = (unsigned char)225;
short var_7 = (short)-30150;
int zero = 0;
unsigned int var_16 = 2772664350U;
unsigned long long int var_17 = 12438832100645514996ULL;
long long int var_18 = 3051203987983179191LL;
unsigned char var_19 = (unsigned char)151;
unsigned char var_20 = (unsigned char)19;
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
