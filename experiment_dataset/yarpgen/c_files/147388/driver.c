#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)7141;
long long int var_4 = -4013423810628940428LL;
short var_5 = (short)-13224;
unsigned short var_7 = (unsigned short)55838;
short var_9 = (short)5290;
int zero = 0;
int var_10 = 903755726;
signed char var_11 = (signed char)72;
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
