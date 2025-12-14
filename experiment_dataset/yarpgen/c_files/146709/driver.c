#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1088237865;
unsigned short var_2 = (unsigned short)20311;
long long int var_3 = -7366670114563948121LL;
int var_4 = 1481014736;
short var_6 = (short)26029;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 5310387292648737800ULL;
long long int var_10 = 802020045187254745LL;
unsigned long long int var_11 = 5452319123393365963ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)5306;
signed char var_14 = (signed char)-116;
short var_15 = (short)5689;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)14290;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
