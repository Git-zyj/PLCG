#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 7057068886550501482ULL;
int var_16 = -658550189;
int var_18 = 1355165892;
int zero = 0;
int var_19 = 1439844741;
int var_20 = -814944885;
unsigned long long int var_21 = 7317442684917247213ULL;
unsigned char var_22 = (unsigned char)176;
void init() {
}

void checksum() {
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
