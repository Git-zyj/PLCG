#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 372741957U;
unsigned short var_3 = (unsigned short)29672;
unsigned short var_6 = (unsigned short)18633;
long long int var_9 = 7627846690569605951LL;
unsigned long long int var_14 = 3992059532818862670ULL;
int zero = 0;
unsigned long long int var_16 = 13929010967511883134ULL;
unsigned char var_17 = (unsigned char)50;
unsigned int var_18 = 1705297316U;
unsigned int var_19 = 2775999897U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
