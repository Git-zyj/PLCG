#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3525447801334476210ULL;
long long int var_9 = -236692362220399987LL;
unsigned char var_10 = (unsigned char)156;
int zero = 0;
short var_12 = (short)-32185;
unsigned long long int var_13 = 7544071505661455902ULL;
unsigned char var_14 = (unsigned char)188;
long long int var_15 = -3043623976504705779LL;
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
