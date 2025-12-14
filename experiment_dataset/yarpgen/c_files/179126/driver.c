#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 884108350U;
unsigned int var_11 = 1580110506U;
unsigned long long int var_12 = 13857477470635451505ULL;
unsigned long long int var_14 = 15555813650541983721ULL;
unsigned int var_15 = 3518653510U;
unsigned short var_16 = (unsigned short)58341;
int zero = 0;
short var_17 = (short)28134;
short var_18 = (short)6119;
int var_19 = -2063365631;
long long int var_20 = -5357921112160240646LL;
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
