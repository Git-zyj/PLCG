#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)32030;
unsigned long long int var_4 = 11734720528083592080ULL;
unsigned char var_7 = (unsigned char)216;
unsigned long long int var_9 = 4454767180819359721ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)95;
unsigned short var_12 = (unsigned short)11443;
signed char var_13 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
