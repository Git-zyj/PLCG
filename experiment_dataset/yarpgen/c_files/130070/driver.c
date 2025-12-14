#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64527;
int var_2 = 1128583302;
int var_3 = -862742721;
unsigned int var_4 = 2073338706U;
short var_9 = (short)20398;
int zero = 0;
short var_10 = (short)-21234;
short var_11 = (short)13027;
unsigned char var_12 = (unsigned char)89;
int var_13 = -1189978592;
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
