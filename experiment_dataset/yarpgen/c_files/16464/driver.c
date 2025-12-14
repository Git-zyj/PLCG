#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
unsigned char var_1 = (unsigned char)44;
signed char var_2 = (signed char)34;
long long int var_5 = 6706925490002089789LL;
long long int var_8 = -6137116893791168910LL;
long long int var_11 = 7914015724297694232LL;
long long int var_13 = 5995883697555930957LL;
int zero = 0;
short var_14 = (short)-9754;
long long int var_15 = 6338512567946462097LL;
void init() {
}

void checksum() {
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
