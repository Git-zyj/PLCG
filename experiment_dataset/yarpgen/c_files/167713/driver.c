#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12492911913778258720ULL;
unsigned char var_7 = (unsigned char)75;
unsigned char var_8 = (unsigned char)137;
unsigned int var_9 = 2378210961U;
unsigned char var_12 = (unsigned char)108;
unsigned long long int var_14 = 13263149297901550945ULL;
int zero = 0;
unsigned long long int var_15 = 9042778581906141619ULL;
unsigned long long int var_16 = 5947881561675995905ULL;
unsigned char var_17 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
