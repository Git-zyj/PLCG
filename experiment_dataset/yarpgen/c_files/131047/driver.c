#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1253793986581031947LL;
long long int var_5 = 2256915349420669783LL;
unsigned char var_8 = (unsigned char)11;
unsigned short var_9 = (unsigned short)15732;
signed char var_10 = (signed char)-105;
int zero = 0;
signed char var_11 = (signed char)100;
int var_12 = -1824979164;
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
