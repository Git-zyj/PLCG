#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
unsigned long long int var_3 = 7231071871519815624ULL;
unsigned short var_4 = (unsigned short)27536;
int var_10 = 224849816;
signed char var_11 = (signed char)-74;
unsigned char var_14 = (unsigned char)105;
int zero = 0;
unsigned int var_17 = 3081766052U;
unsigned int var_18 = 418094197U;
unsigned long long int var_19 = 1065834415297342056ULL;
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
