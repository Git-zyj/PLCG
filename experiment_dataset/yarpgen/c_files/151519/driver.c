#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
short var_1 = (short)-5851;
unsigned char var_4 = (unsigned char)206;
signed char var_5 = (signed char)21;
int var_7 = -517185022;
_Bool var_10 = (_Bool)0;
short var_16 = (short)-27259;
int zero = 0;
int var_19 = 1630498155;
signed char var_20 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
