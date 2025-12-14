#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9824250463878159125ULL;
short var_4 = (short)-31172;
_Bool var_6 = (_Bool)0;
long long int var_7 = 985520139098966645LL;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)17682;
unsigned long long int var_14 = 1287139406498519914ULL;
unsigned short var_15 = (unsigned short)57694;
int zero = 0;
long long int var_16 = 4922972325418452967LL;
_Bool var_17 = (_Bool)1;
int var_18 = 1936277671;
unsigned short var_19 = (unsigned short)10960;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
