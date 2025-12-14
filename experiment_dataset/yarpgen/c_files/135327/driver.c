#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned char var_1 = (unsigned char)188;
unsigned char var_3 = (unsigned char)221;
int var_6 = 1139641001;
unsigned long long int var_7 = 14587792061545359897ULL;
unsigned long long int var_8 = 3205507401631358812ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)109;
unsigned char var_13 = (unsigned char)60;
void init() {
}

void checksum() {
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
