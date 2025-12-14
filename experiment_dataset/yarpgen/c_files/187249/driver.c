#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1883451562;
int var_1 = 1111849025;
long long int var_3 = -8719289180026579962LL;
unsigned short var_4 = (unsigned short)59432;
unsigned char var_6 = (unsigned char)103;
unsigned char var_8 = (unsigned char)69;
unsigned short var_11 = (unsigned short)57059;
int zero = 0;
int var_12 = 1950110321;
signed char var_13 = (signed char)49;
long long int var_14 = 3363847079727905590LL;
int var_15 = -816384618;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
