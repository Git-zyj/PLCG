#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
signed char var_1 = (signed char)83;
unsigned char var_2 = (unsigned char)76;
_Bool var_5 = (_Bool)1;
short var_6 = (short)17963;
short var_7 = (short)348;
unsigned char var_10 = (unsigned char)169;
int zero = 0;
long long int var_11 = -1539888369469603273LL;
signed char var_12 = (signed char)-32;
unsigned short var_13 = (unsigned short)36409;
unsigned long long int var_14 = 6668294079243863738ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
