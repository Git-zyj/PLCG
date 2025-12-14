#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1462178159;
signed char var_2 = (signed char)-28;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)136;
unsigned long long int var_5 = 9642188055065411480ULL;
signed char var_11 = (signed char)119;
unsigned short var_13 = (unsigned short)23449;
int var_14 = -2015995040;
int var_17 = -593190715;
unsigned char var_18 = (unsigned char)204;
unsigned long long int var_19 = 16858786983756657646ULL;
int zero = 0;
signed char var_20 = (signed char)43;
short var_21 = (short)-29728;
int var_22 = -1639310531;
signed char var_23 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
