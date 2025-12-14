#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27025;
unsigned char var_2 = (unsigned char)135;
signed char var_5 = (signed char)101;
signed char var_9 = (signed char)24;
unsigned char var_10 = (unsigned char)119;
unsigned long long int var_13 = 7446158477886990880ULL;
short var_15 = (short)-27179;
unsigned char var_16 = (unsigned char)74;
unsigned short var_17 = (unsigned short)30353;
int zero = 0;
int var_18 = -1878733622;
unsigned char var_19 = (unsigned char)1;
int var_20 = -1831041675;
unsigned short var_21 = (unsigned short)9063;
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
