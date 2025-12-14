#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8446635187680431946LL;
unsigned char var_2 = (unsigned char)168;
long long int var_7 = -1360429882370029948LL;
signed char var_9 = (signed char)-26;
signed char var_10 = (signed char)-58;
int zero = 0;
unsigned int var_11 = 3151147677U;
signed char var_12 = (signed char)88;
long long int var_13 = 9186136450795692994LL;
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
