#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2044692550;
unsigned short var_6 = (unsigned short)34479;
long long int var_9 = -3801024406177318570LL;
int var_10 = 1346884267;
int var_11 = -1378394445;
int zero = 0;
int var_18 = -1976978950;
unsigned short var_19 = (unsigned short)35592;
unsigned short var_20 = (unsigned short)52274;
short var_21 = (short)-25544;
void init() {
}

void checksum() {
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
