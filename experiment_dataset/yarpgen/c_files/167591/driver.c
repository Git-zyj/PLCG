#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2096264138U;
unsigned int var_1 = 2803729806U;
unsigned int var_2 = 3758649755U;
unsigned long long int var_3 = 17092039263830379084ULL;
long long int var_4 = 5084063312755521289LL;
unsigned int var_5 = 2362857091U;
short var_6 = (short)-3357;
long long int var_7 = -7901571051496704019LL;
long long int var_8 = 6315729396548787902LL;
long long int var_9 = -1927423914511127446LL;
int zero = 0;
long long int var_10 = -1615635962682398391LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-5;
long long int var_13 = 911342082838756763LL;
unsigned char var_14 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
