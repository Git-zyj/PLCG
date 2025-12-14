#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)78;
unsigned char var_7 = (unsigned char)75;
unsigned long long int var_9 = 14282326743715655371ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)65072;
unsigned int var_19 = 1236980785U;
short var_20 = (short)-9356;
unsigned long long int var_21 = 4122226678689781313ULL;
short var_22 = (short)-27943;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
