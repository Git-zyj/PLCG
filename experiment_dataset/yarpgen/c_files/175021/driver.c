#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)106;
signed char var_10 = (signed char)14;
long long int var_11 = 888071525302103820LL;
signed char var_14 = (signed char)73;
int zero = 0;
short var_17 = (short)-10240;
signed char var_18 = (signed char)-127;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-27004;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
