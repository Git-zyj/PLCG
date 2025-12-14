#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
unsigned short var_7 = (unsigned short)55027;
unsigned long long int var_8 = 1037899307250304202ULL;
signed char var_9 = (signed char)63;
int zero = 0;
long long int var_13 = -7575460907910060087LL;
signed char var_14 = (signed char)-49;
void init() {
}

void checksum() {
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
