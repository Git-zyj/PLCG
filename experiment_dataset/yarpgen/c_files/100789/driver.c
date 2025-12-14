#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10760205998894463257ULL;
unsigned int var_11 = 3642312849U;
signed char var_13 = (signed char)-48;
int zero = 0;
unsigned long long int var_17 = 930324078144573123ULL;
int var_18 = 1070871922;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
