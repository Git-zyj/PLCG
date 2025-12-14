#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16533172337264395918ULL;
short var_3 = (short)13784;
short var_4 = (short)15532;
long long int var_8 = -1228931101733794478LL;
int var_11 = 873567739;
_Bool var_12 = (_Bool)0;
int var_13 = -275026570;
unsigned int var_14 = 2890635060U;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1957978330;
long long int var_21 = -3110478971729674971LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
