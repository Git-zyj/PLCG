#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27755;
short var_5 = (short)-13154;
unsigned long long int var_7 = 14079380386293431330ULL;
int var_11 = -261071087;
short var_13 = (short)-16154;
long long int var_14 = -6314269430955765858LL;
int zero = 0;
long long int var_16 = -8784983341489170313LL;
unsigned long long int var_17 = 16304886881107409810ULL;
long long int var_18 = -4663290533668081438LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
