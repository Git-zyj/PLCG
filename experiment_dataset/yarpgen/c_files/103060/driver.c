#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1932265773;
unsigned int var_4 = 3520296744U;
short var_6 = (short)2139;
unsigned long long int var_7 = 5158677459496276394ULL;
unsigned int var_9 = 2960497808U;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_13 = -746514884;
unsigned int var_14 = 3218709301U;
unsigned long long int var_15 = 11626787695933424654ULL;
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
