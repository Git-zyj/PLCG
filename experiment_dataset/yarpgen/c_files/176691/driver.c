#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3081867297652514315LL;
short var_9 = (short)-26091;
unsigned char var_18 = (unsigned char)230;
int zero = 0;
unsigned long long int var_19 = 5002816057889082675ULL;
short var_20 = (short)23871;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
