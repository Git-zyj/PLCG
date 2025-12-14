#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 220686205855686133ULL;
unsigned short var_4 = (unsigned short)51764;
unsigned int var_6 = 2567139958U;
unsigned int var_10 = 3078607170U;
unsigned int var_11 = 3697484505U;
short var_13 = (short)15031;
signed char var_14 = (signed char)-82;
unsigned char var_15 = (unsigned char)54;
int zero = 0;
unsigned long long int var_16 = 9029096179012602793ULL;
long long int var_17 = 8299458844263353222LL;
short var_18 = (short)-10678;
unsigned int var_19 = 1947364584U;
short var_20 = (short)-23907;
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
