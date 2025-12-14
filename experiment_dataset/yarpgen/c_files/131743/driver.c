#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16965290141990132385ULL;
int var_6 = -1288342225;
unsigned int var_8 = 3286326962U;
unsigned char var_9 = (unsigned char)142;
unsigned int var_12 = 3986192432U;
signed char var_15 = (signed char)81;
int zero = 0;
signed char var_17 = (signed char)-9;
unsigned short var_18 = (unsigned short)63171;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
