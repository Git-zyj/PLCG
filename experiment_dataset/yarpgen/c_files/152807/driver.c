#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-90;
unsigned char var_4 = (unsigned char)112;
long long int var_6 = -1919001791579232913LL;
unsigned long long int var_7 = 6636609615970800828ULL;
signed char var_13 = (signed char)-87;
int zero = 0;
int var_17 = 1801580112;
int var_18 = -421215960;
unsigned long long int var_19 = 3524437379680432333ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
