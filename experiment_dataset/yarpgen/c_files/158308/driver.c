#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13665767602122308889ULL;
unsigned char var_2 = (unsigned char)50;
short var_4 = (short)-24730;
_Bool var_6 = (_Bool)1;
signed char var_12 = (signed char)47;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -6462371376674593065LL;
unsigned long long int var_15 = 14843961877038761154ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
