#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -493278469295689416LL;
short var_2 = (short)-23737;
long long int var_3 = -533955143337156545LL;
unsigned long long int var_4 = 5631566178834724136ULL;
int var_6 = 1423684010;
unsigned char var_8 = (unsigned char)0;
unsigned int var_13 = 2055721760U;
int zero = 0;
short var_14 = (short)18240;
short var_15 = (short)-29421;
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
