#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1236824996;
short var_2 = (short)24066;
short var_5 = (short)815;
long long int var_13 = 1834850550058144633LL;
int zero = 0;
short var_17 = (short)19500;
int var_18 = 149552313;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
