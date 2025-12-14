#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
signed char var_4 = (signed char)40;
long long int var_14 = 4592994619820144014LL;
long long int var_16 = -7778235460040989637LL;
int zero = 0;
unsigned char var_17 = (unsigned char)28;
int var_18 = 578289262;
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
