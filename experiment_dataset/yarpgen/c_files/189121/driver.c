#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1634731529154484513LL;
unsigned int var_1 = 3664244963U;
long long int var_3 = -3199321538014768869LL;
unsigned int var_12 = 3080198778U;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1945306022;
long long int var_19 = 8964122577031508545LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
