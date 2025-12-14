#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3293066238U;
unsigned char var_4 = (unsigned char)188;
unsigned long long int var_8 = 8269637787218440540ULL;
signed char var_9 = (signed char)-6;
signed char var_13 = (signed char)57;
int zero = 0;
unsigned char var_14 = (unsigned char)56;
unsigned char var_15 = (unsigned char)76;
unsigned long long int var_16 = 9068779596096748369ULL;
void init() {
}

void checksum() {
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
