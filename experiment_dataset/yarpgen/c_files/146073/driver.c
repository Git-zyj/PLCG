#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -272846482;
unsigned long long int var_7 = 943786515333020478ULL;
unsigned short var_9 = (unsigned short)17484;
int var_10 = -738882044;
int zero = 0;
unsigned char var_11 = (unsigned char)201;
unsigned long long int var_12 = 8243570615003720184ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
