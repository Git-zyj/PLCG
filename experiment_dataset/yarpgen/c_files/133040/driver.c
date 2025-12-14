#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16985228946871803604ULL;
unsigned long long int var_1 = 8768224580421334281ULL;
unsigned short var_10 = (unsigned short)15952;
int zero = 0;
unsigned short var_19 = (unsigned short)64152;
unsigned char var_20 = (unsigned char)117;
unsigned long long int var_21 = 8982863756283849152ULL;
unsigned long long int var_22 = 3284400658256233505ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
