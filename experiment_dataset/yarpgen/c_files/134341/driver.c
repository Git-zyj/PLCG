#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1607495359U;
unsigned char var_1 = (unsigned char)180;
unsigned long long int var_2 = 18177828410208577310ULL;
int var_4 = 1108250082;
long long int var_6 = 3215697741968380240LL;
int var_7 = -576578130;
unsigned int var_12 = 2400366081U;
short var_14 = (short)17302;
unsigned short var_15 = (unsigned short)57732;
int zero = 0;
int var_18 = 1742429734;
int var_19 = 136467487;
unsigned int var_20 = 2252753220U;
int var_21 = -818222142;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
