#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2414837845216256945LL;
unsigned int var_2 = 2537120868U;
unsigned int var_6 = 2202030755U;
_Bool var_7 = (_Bool)1;
int var_9 = -133903109;
long long int var_10 = -2377691126405653061LL;
short var_11 = (short)-9803;
unsigned short var_12 = (unsigned short)20045;
short var_14 = (short)28549;
short var_16 = (short)-8455;
int zero = 0;
unsigned long long int var_20 = 7189767884132367268ULL;
long long int var_21 = -6090653510695677689LL;
long long int var_22 = 5306675247388933817LL;
short var_23 = (short)3967;
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
