#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21251;
unsigned int var_3 = 3524437803U;
_Bool var_4 = (_Bool)0;
short var_7 = (short)12488;
signed char var_8 = (signed char)13;
int zero = 0;
unsigned short var_12 = (unsigned short)22009;
long long int var_13 = -8956149717709424801LL;
long long int var_14 = -7954523965884495664LL;
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
