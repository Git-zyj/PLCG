#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
unsigned char var_9 = (unsigned char)190;
short var_10 = (short)-21299;
unsigned char var_11 = (unsigned char)156;
int zero = 0;
long long int var_12 = 8885001921706319833LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5629381498654377821LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
