#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4600814598515802506LL;
long long int var_2 = 7916144427133728467LL;
_Bool var_3 = (_Bool)1;
short var_4 = (short)2523;
unsigned long long int var_6 = 16490636342848541990ULL;
unsigned short var_7 = (unsigned short)56323;
unsigned char var_9 = (unsigned char)163;
int zero = 0;
unsigned int var_10 = 2997287096U;
short var_11 = (short)5150;
unsigned int var_12 = 2838494035U;
unsigned int var_13 = 1242577000U;
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
