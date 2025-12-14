#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1511204611204034044ULL;
unsigned long long int var_9 = 12236938246416807330ULL;
short var_11 = (short)-25543;
long long int var_13 = 6354422502201693756LL;
int var_15 = -1074549964;
int zero = 0;
signed char var_16 = (signed char)-2;
short var_17 = (short)-27489;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
