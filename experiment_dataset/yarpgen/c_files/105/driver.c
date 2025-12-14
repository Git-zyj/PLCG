#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3038312821U;
long long int var_3 = 4450395309516886751LL;
short var_9 = (short)-11717;
long long int var_12 = -2947552900074769481LL;
int zero = 0;
unsigned short var_13 = (unsigned short)50450;
unsigned char var_14 = (unsigned char)60;
unsigned long long int var_15 = 10611391531140539690ULL;
long long int var_16 = -6069729107428598765LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
