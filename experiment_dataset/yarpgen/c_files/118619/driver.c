#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41307;
unsigned char var_8 = (unsigned char)34;
short var_9 = (short)27228;
unsigned long long int var_11 = 11039695761849105478ULL;
int zero = 0;
short var_12 = (short)22319;
unsigned short var_13 = (unsigned short)50026;
unsigned short var_14 = (unsigned short)46217;
unsigned long long int var_15 = 17726273903220542517ULL;
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
