#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1033986166;
int var_2 = 1829242994;
unsigned long long int var_3 = 11150190006835912398ULL;
signed char var_4 = (signed char)28;
unsigned long long int var_6 = 5495274080278492425ULL;
int zero = 0;
signed char var_10 = (signed char)-61;
unsigned char var_11 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
