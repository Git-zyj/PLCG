#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35035;
unsigned long long int var_3 = 16914440444630921143ULL;
unsigned short var_4 = (unsigned short)35595;
unsigned short var_9 = (unsigned short)47068;
int zero = 0;
unsigned long long int var_10 = 5878165817709865049ULL;
unsigned short var_11 = (unsigned short)32954;
unsigned short var_12 = (unsigned short)4628;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
