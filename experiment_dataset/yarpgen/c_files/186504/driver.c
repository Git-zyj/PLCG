#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16867176962455203604ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -1513654469167721833LL;
signed char var_8 = (signed char)-58;
long long int var_9 = 8204510284861644105LL;
int var_10 = -562657960;
int zero = 0;
unsigned short var_12 = (unsigned short)46530;
unsigned int var_13 = 642818901U;
int var_14 = -1915614862;
void init() {
}

void checksum() {
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
