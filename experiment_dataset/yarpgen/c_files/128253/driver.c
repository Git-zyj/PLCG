#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10853405076035164939ULL;
unsigned int var_4 = 1487867108U;
unsigned long long int var_5 = 4462929656079357469ULL;
unsigned short var_7 = (unsigned short)41967;
int zero = 0;
short var_12 = (short)-13882;
short var_13 = (short)13401;
void init() {
}

void checksum() {
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
