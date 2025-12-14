#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
long long int var_1 = -1482380703405499821LL;
long long int var_2 = -7947810752038874851LL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)153;
signed char var_11 = (signed char)-102;
unsigned char var_12 = (unsigned char)215;
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
