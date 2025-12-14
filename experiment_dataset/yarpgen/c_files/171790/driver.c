#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)136;
long long int var_8 = 3263815475130265591LL;
short var_12 = (short)14783;
unsigned long long int var_18 = 3462389926336266808ULL;
int zero = 0;
unsigned long long int var_20 = 14023222621315119183ULL;
short var_21 = (short)-2810;
long long int var_22 = 6986600037375311970LL;
void init() {
}

void checksum() {
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
