#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4880874597434323247LL;
short var_5 = (short)6218;
unsigned short var_6 = (unsigned short)7827;
signed char var_7 = (signed char)89;
signed char var_10 = (signed char)-127;
int var_11 = -43857481;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
long long int var_13 = 4505061853568709172LL;
int var_14 = 162678188;
void init() {
}

void checksum() {
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
