#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11941;
int var_2 = -1889714600;
int var_4 = 2016608855;
long long int var_5 = 6990682238311595919LL;
signed char var_6 = (signed char)-114;
unsigned int var_7 = 2518321403U;
int zero = 0;
unsigned int var_11 = 1643252283U;
short var_12 = (short)-7501;
unsigned char var_13 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
