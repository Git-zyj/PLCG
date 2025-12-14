#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -470034619;
signed char var_2 = (signed char)75;
unsigned long long int var_3 = 8734950221520890554ULL;
unsigned long long int var_6 = 6892407067564701678ULL;
signed char var_7 = (signed char)-8;
unsigned long long int var_10 = 13972340121238559072ULL;
unsigned short var_11 = (unsigned short)31356;
int zero = 0;
signed char var_15 = (signed char)78;
short var_16 = (short)26801;
unsigned char var_17 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
