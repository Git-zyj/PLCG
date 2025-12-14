#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6254410667838596746LL;
unsigned char var_2 = (unsigned char)189;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-32;
long long int var_9 = -6587136274151460023LL;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-123;
short var_15 = (short)7084;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
