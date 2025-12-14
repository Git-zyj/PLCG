#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)36;
signed char var_4 = (signed char)-82;
unsigned long long int var_6 = 2151443956167823494ULL;
unsigned long long int var_9 = 1873202545131214833ULL;
int zero = 0;
unsigned int var_11 = 673192685U;
unsigned long long int var_12 = 699056923021095468ULL;
short var_13 = (short)-30123;
short var_14 = (short)-845;
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
