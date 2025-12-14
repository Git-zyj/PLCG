#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
unsigned int var_1 = 1768302424U;
unsigned int var_5 = 3921778784U;
unsigned short var_9 = (unsigned short)18691;
int zero = 0;
unsigned int var_10 = 3680528155U;
long long int var_11 = 3813646480528362267LL;
int var_12 = -1176939735;
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
