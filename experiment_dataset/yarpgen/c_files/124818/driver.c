#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62752;
unsigned int var_1 = 482388777U;
signed char var_2 = (signed char)57;
unsigned long long int var_4 = 13531724369217776998ULL;
signed char var_5 = (signed char)96;
unsigned char var_6 = (unsigned char)245;
signed char var_7 = (signed char)-70;
unsigned int var_8 = 506311548U;
signed char var_10 = (signed char)-45;
unsigned short var_11 = (unsigned short)44721;
unsigned short var_12 = (unsigned short)29040;
int zero = 0;
unsigned int var_13 = 3986072813U;
unsigned long long int var_14 = 12870189648823122006ULL;
unsigned char var_15 = (unsigned char)251;
long long int var_16 = -1454493524108384474LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
