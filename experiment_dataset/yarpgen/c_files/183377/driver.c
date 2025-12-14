#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26610;
short var_2 = (short)18469;
short var_7 = (short)-11745;
_Bool var_8 = (_Bool)1;
unsigned char var_12 = (unsigned char)46;
int zero = 0;
signed char var_14 = (signed char)121;
unsigned long long int var_15 = 17617521068430140975ULL;
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
