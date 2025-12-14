#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)37;
int var_2 = 1252067334;
unsigned short var_4 = (unsigned short)63066;
unsigned long long int var_6 = 5833749067005907881ULL;
unsigned int var_7 = 266743000U;
long long int var_8 = 675506472301076010LL;
signed char var_13 = (signed char)85;
signed char var_17 = (signed char)-71;
int zero = 0;
long long int var_18 = -5249689024688765354LL;
short var_19 = (short)9385;
unsigned long long int var_20 = 8205575937991860589ULL;
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
