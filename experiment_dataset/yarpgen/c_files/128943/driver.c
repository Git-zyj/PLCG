#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)145;
signed char var_5 = (signed char)-96;
unsigned char var_7 = (unsigned char)128;
unsigned char var_8 = (unsigned char)153;
signed char var_11 = (signed char)-49;
signed char var_12 = (signed char)-123;
unsigned long long int var_15 = 16852165640621382365ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-21;
int var_20 = -1824883945;
signed char var_21 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
