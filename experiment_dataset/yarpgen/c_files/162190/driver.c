#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4023601182U;
int var_2 = -264950665;
long long int var_4 = 9146897749515791235LL;
signed char var_5 = (signed char)-30;
long long int var_7 = -9037451640864532498LL;
unsigned int var_9 = 4057000016U;
signed char var_13 = (signed char)-2;
int zero = 0;
unsigned int var_14 = 2020499406U;
unsigned char var_15 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
