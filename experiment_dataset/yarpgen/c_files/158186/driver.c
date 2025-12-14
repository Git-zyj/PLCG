#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3257773684238669LL;
unsigned short var_9 = (unsigned short)17745;
int zero = 0;
unsigned short var_11 = (unsigned short)60620;
unsigned long long int var_12 = 12523821170163261464ULL;
int var_13 = 1301088057;
long long int var_14 = 6965372321011776776LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
