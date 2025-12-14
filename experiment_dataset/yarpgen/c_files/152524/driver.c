#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14657;
unsigned long long int var_2 = 6139153797644365040ULL;
unsigned long long int var_5 = 11661229551885483612ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)114;
int zero = 0;
unsigned short var_18 = (unsigned short)51156;
short var_19 = (short)26038;
int var_20 = 1264992816;
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
