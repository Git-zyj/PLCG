#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-81;
_Bool var_10 = (_Bool)0;
long long int var_13 = 6497585035890091402LL;
int zero = 0;
unsigned short var_17 = (unsigned short)27481;
signed char var_18 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
