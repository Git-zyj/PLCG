#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6101730944158207714LL;
int var_1 = -1872823885;
unsigned short var_4 = (unsigned short)7568;
unsigned int var_5 = 3806573856U;
unsigned int var_7 = 3965663669U;
unsigned short var_10 = (unsigned short)2713;
short var_16 = (short)-10472;
int zero = 0;
unsigned char var_18 = (unsigned char)66;
unsigned short var_19 = (unsigned short)29444;
unsigned long long int var_20 = 17389968455366447794ULL;
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
