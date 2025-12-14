#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14114127778249176507ULL;
unsigned long long int var_2 = 4723483325751619950ULL;
unsigned char var_3 = (unsigned char)56;
long long int var_5 = -2014119917057290039LL;
signed char var_6 = (signed char)-50;
long long int var_9 = 6313329205851217285LL;
int zero = 0;
unsigned short var_10 = (unsigned short)28571;
short var_11 = (short)13003;
unsigned int var_12 = 3128062065U;
unsigned int var_13 = 1162045330U;
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
