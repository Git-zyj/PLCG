#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)83;
unsigned long long int var_5 = 14840496396311771821ULL;
unsigned char var_9 = (unsigned char)114;
long long int var_12 = 6499485347002390035LL;
unsigned long long int var_13 = 11084953255495952113ULL;
long long int var_16 = -7970296972514852576LL;
int zero = 0;
signed char var_20 = (signed char)-23;
long long int var_21 = 7982431745470001385LL;
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
