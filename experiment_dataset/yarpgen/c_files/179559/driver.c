#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)33;
unsigned char var_5 = (unsigned char)193;
int var_9 = -1635902683;
unsigned short var_10 = (unsigned short)9874;
unsigned int var_11 = 635270130U;
unsigned char var_14 = (unsigned char)57;
signed char var_15 = (signed char)-122;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
int var_19 = 574060487;
int var_20 = 1844375221;
signed char var_21 = (signed char)11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
