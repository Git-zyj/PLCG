#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1101342506U;
unsigned long long int var_6 = 17830974703411007675ULL;
int var_7 = -1495056039;
unsigned int var_8 = 838933595U;
unsigned char var_9 = (unsigned char)3;
int zero = 0;
signed char var_12 = (signed char)-108;
int var_13 = 1428324063;
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
