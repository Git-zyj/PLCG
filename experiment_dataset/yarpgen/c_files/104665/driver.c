#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1647796422;
unsigned long long int var_5 = 6876427012622799192ULL;
unsigned char var_7 = (unsigned char)163;
short var_9 = (short)10674;
unsigned long long int var_11 = 8525457480656415457ULL;
unsigned char var_12 = (unsigned char)67;
int zero = 0;
short var_17 = (short)6491;
unsigned char var_18 = (unsigned char)48;
int var_19 = 1321221055;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
