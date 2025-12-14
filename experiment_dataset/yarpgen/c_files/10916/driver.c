#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 757747617;
signed char var_2 = (signed char)-87;
long long int var_3 = -6385700353700099124LL;
unsigned long long int var_9 = 5822506528779635756ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)30854;
unsigned short var_12 = (unsigned short)49051;
short var_13 = (short)1179;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
