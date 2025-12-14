#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
unsigned int var_1 = 4191467955U;
unsigned short var_7 = (unsigned short)18943;
int zero = 0;
long long int var_10 = -1387591259095564339LL;
unsigned short var_11 = (unsigned short)57307;
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
