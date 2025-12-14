#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8760121954712639713LL;
short var_1 = (short)28144;
short var_2 = (short)6750;
short var_3 = (short)1002;
int var_4 = -355435877;
unsigned long long int var_5 = 11381716112555390805ULL;
unsigned int var_6 = 1564104259U;
unsigned short var_7 = (unsigned short)17175;
unsigned int var_8 = 1136516744U;
int zero = 0;
int var_10 = -1395821037;
int var_11 = -241701209;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
