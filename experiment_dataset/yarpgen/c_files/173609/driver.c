#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 155562104U;
unsigned long long int var_3 = 12276876547906522918ULL;
signed char var_4 = (signed char)7;
unsigned char var_5 = (unsigned char)140;
signed char var_7 = (signed char)-124;
unsigned int var_8 = 2648818358U;
int var_10 = -1116773700;
int var_11 = -1591201859;
short var_12 = (short)-3250;
signed char var_13 = (signed char)14;
int zero = 0;
signed char var_14 = (signed char)-2;
unsigned long long int var_15 = 3643597411009961390ULL;
unsigned int var_16 = 2858660645U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
