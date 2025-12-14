#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57607;
long long int var_4 = 5032301523725845922LL;
unsigned char var_5 = (unsigned char)15;
unsigned char var_6 = (unsigned char)70;
unsigned char var_12 = (unsigned char)200;
int zero = 0;
unsigned long long int var_13 = 9296522089638063878ULL;
unsigned char var_14 = (unsigned char)162;
int var_15 = 712243705;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
