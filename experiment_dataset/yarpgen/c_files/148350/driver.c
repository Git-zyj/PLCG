#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4452640761475652320ULL;
_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)-11;
int zero = 0;
short var_10 = (short)20083;
unsigned char var_11 = (unsigned char)172;
unsigned char var_12 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
