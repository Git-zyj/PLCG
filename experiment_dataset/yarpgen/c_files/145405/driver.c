#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 906146706;
unsigned char var_2 = (unsigned char)198;
unsigned long long int var_4 = 12417806146110118987ULL;
int var_5 = 1393583296;
signed char var_7 = (signed char)-95;
unsigned char var_8 = (unsigned char)235;
long long int var_9 = -6249430685623591062LL;
int zero = 0;
int var_10 = -293921508;
unsigned long long int var_11 = 4409545244360176577ULL;
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
