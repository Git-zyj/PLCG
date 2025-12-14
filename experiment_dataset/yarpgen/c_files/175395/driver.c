#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8492345314057267738LL;
unsigned char var_1 = (unsigned char)24;
unsigned int var_3 = 1998051129U;
signed char var_4 = (signed char)55;
signed char var_5 = (signed char)-75;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 13739466287639943497ULL;
short var_9 = (short)1628;
int zero = 0;
long long int var_10 = 6905566120248141389LL;
short var_11 = (short)-1917;
signed char var_12 = (signed char)106;
long long int var_13 = 8729121900781546048LL;
int var_14 = -1435480039;
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
