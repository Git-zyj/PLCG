#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)34;
int var_5 = -1380772578;
int var_6 = -176301198;
unsigned long long int var_8 = 16871669211740677608ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)57037;
unsigned char var_14 = (unsigned char)25;
unsigned long long int var_15 = 8050425282626156931ULL;
void init() {
}

void checksum() {
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
