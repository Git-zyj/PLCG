#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15173;
short var_1 = (short)14029;
unsigned int var_2 = 4116260773U;
long long int var_5 = 1938268318041078771LL;
unsigned int var_9 = 2417008111U;
unsigned int var_12 = 3762123358U;
unsigned long long int var_13 = 1956297079449115441ULL;
long long int var_15 = -3530445581247546381LL;
int zero = 0;
long long int var_17 = 5766773187503145986LL;
unsigned int var_18 = 4059191837U;
unsigned short var_19 = (unsigned short)24861;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
