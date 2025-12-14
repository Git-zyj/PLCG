#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50143;
unsigned char var_7 = (unsigned char)227;
unsigned long long int var_10 = 14302212094170713887ULL;
int zero = 0;
unsigned long long int var_19 = 16652441931686247801ULL;
int var_20 = 64305471;
unsigned long long int var_21 = 10069797383874620886ULL;
void init() {
}

void checksum() {
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
