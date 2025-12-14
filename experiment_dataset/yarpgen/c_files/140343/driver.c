#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4568204265195439109LL;
int var_3 = 1472214526;
unsigned short var_6 = (unsigned short)18684;
signed char var_7 = (signed char)-82;
short var_10 = (short)7441;
int var_13 = -1795276387;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
int var_16 = 835570212;
unsigned short var_17 = (unsigned short)9834;
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
