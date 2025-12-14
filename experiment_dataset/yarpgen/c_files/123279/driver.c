#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3713442437U;
unsigned long long int var_1 = 6929997156952925470ULL;
signed char var_2 = (signed char)49;
long long int var_3 = -4634060159881004967LL;
int var_4 = 819673027;
signed char var_6 = (signed char)86;
int zero = 0;
unsigned char var_10 = (unsigned char)145;
unsigned long long int var_11 = 17140621593660101241ULL;
int var_12 = 1402852076;
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
