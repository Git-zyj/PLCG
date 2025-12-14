#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2405035410786931262ULL;
unsigned char var_5 = (unsigned char)194;
unsigned char var_7 = (unsigned char)164;
unsigned char var_11 = (unsigned char)228;
int zero = 0;
int var_12 = -832358153;
unsigned long long int var_13 = 6707517611247338545ULL;
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
