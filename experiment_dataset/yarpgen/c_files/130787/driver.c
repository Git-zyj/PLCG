#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1853155200;
unsigned short var_2 = (unsigned short)2938;
signed char var_3 = (signed char)119;
signed char var_6 = (signed char)51;
unsigned char var_7 = (unsigned char)63;
unsigned char var_9 = (unsigned char)103;
unsigned long long int var_10 = 3203567090687106741ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-126;
unsigned int var_16 = 4279523108U;
unsigned short var_17 = (unsigned short)57867;
void init() {
}

void checksum() {
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
