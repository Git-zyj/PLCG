#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10823;
unsigned short var_3 = (unsigned short)55348;
unsigned char var_4 = (unsigned char)117;
unsigned int var_5 = 2340081037U;
long long int var_9 = 9000641422406065884LL;
int var_11 = 550120166;
long long int var_13 = -593036715517609743LL;
long long int var_15 = 3369142186619894303LL;
int zero = 0;
long long int var_16 = -5529232288316521087LL;
signed char var_17 = (signed char)53;
unsigned short var_18 = (unsigned short)19628;
unsigned int var_19 = 2342817700U;
unsigned long long int var_20 = 17597177645338258599ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
