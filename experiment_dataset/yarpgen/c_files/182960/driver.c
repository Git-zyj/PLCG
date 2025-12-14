#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7662071242664607372ULL;
signed char var_3 = (signed char)-106;
unsigned int var_4 = 2373360029U;
unsigned int var_5 = 2648244076U;
unsigned int var_6 = 3005613355U;
int var_8 = 1353008055;
long long int var_11 = -279746559122173048LL;
short var_12 = (short)-30714;
int zero = 0;
short var_13 = (short)7651;
unsigned long long int var_14 = 16211234055539053070ULL;
void init() {
}

void checksum() {
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
