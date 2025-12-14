#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1908459489;
unsigned short var_1 = (unsigned short)38666;
unsigned char var_2 = (unsigned char)105;
int var_3 = 1894234638;
int var_4 = -125491713;
unsigned char var_5 = (unsigned char)184;
int var_6 = 294172955;
unsigned int var_7 = 2963451916U;
int zero = 0;
long long int var_10 = 510671448305050024LL;
unsigned char var_11 = (unsigned char)63;
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
