#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8519516865396565207ULL;
unsigned long long int var_1 = 2221492108423684026ULL;
unsigned long long int var_2 = 2701829623750003179ULL;
unsigned long long int var_3 = 7242733114890159903ULL;
unsigned long long int var_7 = 10444367662003400971ULL;
int zero = 0;
unsigned long long int var_17 = 12600551331838639477ULL;
unsigned long long int var_18 = 16278289589653501411ULL;
unsigned long long int var_19 = 3872397876785678884ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
