#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned char var_1 = (unsigned char)90;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)52137;
int var_8 = -1570173005;
long long int var_9 = 6693611294883561834LL;
unsigned char var_10 = (unsigned char)96;
int zero = 0;
unsigned char var_12 = (unsigned char)156;
unsigned long long int var_13 = 7811786925912086905ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
