#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1995016924;
int var_1 = -1022537597;
unsigned short var_2 = (unsigned short)34061;
signed char var_9 = (signed char)13;
unsigned int var_11 = 2276266345U;
long long int var_12 = 6303225864247778731LL;
int var_15 = -1186505543;
unsigned int var_16 = 204057807U;
short var_17 = (short)-27577;
int zero = 0;
unsigned long long int var_18 = 13446433188102467997ULL;
unsigned char var_19 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
