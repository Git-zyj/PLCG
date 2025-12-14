#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10384320807670242276ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)23388;
_Bool var_4 = (_Bool)1;
short var_7 = (short)1905;
long long int var_8 = -2077542089107054518LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)63;
unsigned long long int var_12 = 16825560091183222880ULL;
unsigned long long int var_13 = 2265293883675832110ULL;
signed char var_14 = (signed char)111;
void init() {
}

void checksum() {
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
