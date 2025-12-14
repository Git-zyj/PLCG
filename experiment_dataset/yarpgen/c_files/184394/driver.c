#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1264931091;
int var_10 = -1555440411;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
signed char var_20 = (signed char)-104;
unsigned char var_21 = (unsigned char)28;
unsigned char var_22 = (unsigned char)155;
void init() {
}

void checksum() {
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
