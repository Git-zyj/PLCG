#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)239;
unsigned short var_8 = (unsigned short)57732;
short var_9 = (short)2238;
signed char var_15 = (signed char)0;
int zero = 0;
long long int var_18 = -2523663023053714454LL;
unsigned long long int var_19 = 16957748815093879793ULL;
unsigned long long int var_20 = 4149668930901091735ULL;
void init() {
}

void checksum() {
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
