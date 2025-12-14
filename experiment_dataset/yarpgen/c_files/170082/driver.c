#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -649118608;
unsigned short var_2 = (unsigned short)28276;
signed char var_4 = (signed char)121;
short var_5 = (short)4389;
signed char var_9 = (signed char)64;
int zero = 0;
unsigned short var_10 = (unsigned short)24647;
long long int var_11 = -1787706051380010355LL;
short var_12 = (short)-1186;
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
