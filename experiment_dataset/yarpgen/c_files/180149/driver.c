#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 132790308;
long long int var_6 = -91360667999353916LL;
long long int var_8 = 4151940644398446021LL;
unsigned char var_9 = (unsigned char)36;
long long int var_11 = 8208190611468352382LL;
int zero = 0;
unsigned int var_13 = 2788132089U;
unsigned int var_14 = 1391423438U;
unsigned int var_15 = 644417760U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
