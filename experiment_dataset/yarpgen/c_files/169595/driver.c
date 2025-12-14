#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6767600726529173661ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)145;
short var_9 = (short)20612;
int zero = 0;
int var_10 = 1398378984;
unsigned short var_11 = (unsigned short)44559;
unsigned long long int var_12 = 4619138816146684155ULL;
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
