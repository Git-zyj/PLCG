#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15886518485491750894ULL;
unsigned char var_3 = (unsigned char)226;
unsigned short var_5 = (unsigned short)54923;
int var_6 = -1395355902;
int var_7 = 518495031;
unsigned char var_9 = (unsigned char)172;
int zero = 0;
unsigned short var_11 = (unsigned short)40631;
unsigned short var_12 = (unsigned short)33328;
unsigned char var_13 = (unsigned char)111;
void init() {
}

void checksum() {
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
