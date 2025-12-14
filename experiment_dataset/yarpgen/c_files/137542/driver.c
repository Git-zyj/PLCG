#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)15;
unsigned int var_6 = 4138058249U;
int var_10 = -597679853;
long long int var_11 = 8080663529361983884LL;
unsigned int var_12 = 1715649470U;
unsigned short var_14 = (unsigned short)57196;
int zero = 0;
unsigned int var_20 = 853163740U;
unsigned int var_21 = 2926905657U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
