#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
short var_3 = (short)6770;
int var_6 = -198248966;
unsigned short var_7 = (unsigned short)735;
long long int var_10 = 2399835337774830687LL;
unsigned short var_11 = (unsigned short)15872;
int zero = 0;
long long int var_12 = 1701247137007939973LL;
int var_13 = 341243499;
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
