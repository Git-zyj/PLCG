#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 642516996;
unsigned char var_9 = (unsigned char)127;
int var_10 = 1822817533;
int zero = 0;
int var_17 = 1419069167;
int var_18 = 1095882153;
unsigned char var_19 = (unsigned char)208;
int var_20 = -1140577501;
unsigned char var_21 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
