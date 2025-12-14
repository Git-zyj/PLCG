#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3260813955027145231ULL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)16678;
_Bool var_3 = (_Bool)0;
int var_5 = -764731268;
short var_6 = (short)-24440;
unsigned char var_7 = (unsigned char)17;
unsigned short var_9 = (unsigned short)57283;
signed char var_11 = (signed char)-113;
int zero = 0;
unsigned int var_13 = 1081046244U;
unsigned char var_14 = (unsigned char)13;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2539367998994720917ULL;
unsigned char var_17 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
