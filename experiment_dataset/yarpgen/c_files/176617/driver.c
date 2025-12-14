#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1043090359583778046LL;
unsigned long long int var_7 = 13767981151339467223ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 356225030U;
unsigned short var_12 = (unsigned short)28303;
long long int var_13 = -1877174441814384161LL;
int zero = 0;
int var_19 = -1520181615;
long long int var_20 = -6270783103848351841LL;
unsigned int var_21 = 3449548675U;
short var_22 = (short)16952;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
