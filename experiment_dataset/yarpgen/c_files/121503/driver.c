#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
signed char var_4 = (signed char)-23;
unsigned int var_11 = 3766950362U;
unsigned long long int var_12 = 12624380965477858597ULL;
unsigned char var_17 = (unsigned char)190;
int zero = 0;
unsigned short var_18 = (unsigned short)39869;
long long int var_19 = -407112756566744321LL;
void init() {
}

void checksum() {
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
