#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4581494592879300235ULL;
unsigned char var_1 = (unsigned char)100;
unsigned short var_2 = (unsigned short)15327;
unsigned long long int var_3 = 827977769085055276ULL;
int var_4 = -1396493538;
unsigned char var_7 = (unsigned char)90;
unsigned long long int var_8 = 4380401078600239400ULL;
unsigned char var_9 = (unsigned char)187;
int zero = 0;
unsigned char var_14 = (unsigned char)60;
unsigned long long int var_15 = 4495896369021949224ULL;
void init() {
}

void checksum() {
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
