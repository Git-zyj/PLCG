#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-1;
int var_4 = -1541391567;
unsigned long long int var_7 = 9205816073386130331ULL;
unsigned short var_9 = (unsigned short)46569;
short var_10 = (short)-23633;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6664671979182012067LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 5103936571841411514LL;
unsigned short var_16 = (unsigned short)40380;
unsigned char var_17 = (unsigned char)56;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
