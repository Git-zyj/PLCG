#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3327309657U;
int var_1 = -1046113181;
short var_2 = (short)25691;
long long int var_3 = -1222790663810542469LL;
long long int var_4 = 3541104010984157803LL;
signed char var_5 = (signed char)-27;
unsigned int var_6 = 1379855180U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)1347;
unsigned char var_10 = (unsigned char)159;
int zero = 0;
unsigned int var_11 = 2774384734U;
unsigned int var_12 = 2745164948U;
signed char var_13 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
