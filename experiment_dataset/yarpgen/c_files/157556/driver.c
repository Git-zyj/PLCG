#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
long long int var_3 = -5814720595276508407LL;
int var_5 = 332072157;
long long int var_6 = -2006082139212649437LL;
long long int var_8 = -1173204001399787154LL;
int zero = 0;
signed char var_10 = (signed char)-103;
int var_11 = -516803084;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
