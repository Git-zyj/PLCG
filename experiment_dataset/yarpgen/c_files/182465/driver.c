#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3352562604U;
unsigned short var_2 = (unsigned short)27261;
unsigned long long int var_10 = 6595418570580024950ULL;
long long int var_12 = 9111121147773368692LL;
unsigned char var_14 = (unsigned char)76;
unsigned int var_18 = 2376935968U;
int zero = 0;
signed char var_19 = (signed char)-89;
unsigned char var_20 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
