#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1878454869;
unsigned short var_1 = (unsigned short)39214;
short var_2 = (short)-25906;
unsigned short var_3 = (unsigned short)13666;
long long int var_4 = -4869800204721443444LL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)21478;
int var_9 = -2026079713;
signed char var_10 = (signed char)-50;
unsigned int var_11 = 783505521U;
unsigned long long int var_12 = 5067162544724919819ULL;
short var_13 = (short)-2686;
int zero = 0;
unsigned int var_14 = 3014112192U;
unsigned int var_15 = 3053378669U;
int var_16 = -45988899;
unsigned int var_17 = 2462470100U;
short var_18 = (short)25304;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
