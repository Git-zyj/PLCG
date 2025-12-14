#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
unsigned long long int var_3 = 11016820745661727374ULL;
signed char var_4 = (signed char)-101;
unsigned long long int var_5 = 9498973385125610507ULL;
signed char var_7 = (signed char)5;
signed char var_8 = (signed char)-109;
unsigned char var_9 = (unsigned char)137;
int zero = 0;
unsigned int var_11 = 1788341798U;
unsigned int var_12 = 965973997U;
unsigned short var_13 = (unsigned short)946;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
