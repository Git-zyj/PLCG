#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-59;
long long int var_2 = 9161236542720301869LL;
unsigned short var_9 = (unsigned short)20257;
int zero = 0;
unsigned short var_12 = (unsigned short)51887;
int var_13 = -905880445;
int var_14 = -1826474555;
signed char var_15 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
