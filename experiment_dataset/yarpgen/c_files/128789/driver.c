#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3478408126U;
signed char var_5 = (signed char)66;
short var_6 = (short)-27988;
unsigned short var_7 = (unsigned short)4336;
unsigned short var_8 = (unsigned short)33460;
unsigned int var_10 = 364001815U;
unsigned int var_12 = 2278797073U;
int var_14 = -1860047582;
unsigned short var_15 = (unsigned short)50952;
short var_18 = (short)-10225;
int zero = 0;
unsigned short var_19 = (unsigned short)57754;
unsigned int var_20 = 4146686970U;
long long int var_21 = 6684834169260401399LL;
int var_22 = 1404261467;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
