#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
long long int var_6 = -8685612846552413846LL;
int var_7 = 1264537983;
signed char var_11 = (signed char)-79;
int zero = 0;
unsigned long long int var_19 = 12369950731953531651ULL;
unsigned int var_20 = 4095499051U;
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
