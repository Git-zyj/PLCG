#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)61;
signed char var_8 = (signed char)66;
unsigned short var_19 = (unsigned short)30748;
int zero = 0;
unsigned long long int var_20 = 3429697653428458680ULL;
signed char var_21 = (signed char)8;
int var_22 = 724929036;
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
