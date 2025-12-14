#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4240793335200301737ULL;
unsigned short var_3 = (unsigned short)17500;
long long int var_4 = 635154304440351360LL;
unsigned long long int var_5 = 8389719402036164310ULL;
int var_8 = 320019089;
short var_9 = (short)23710;
unsigned int var_10 = 871666576U;
int zero = 0;
unsigned int var_11 = 3220210089U;
signed char var_12 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
