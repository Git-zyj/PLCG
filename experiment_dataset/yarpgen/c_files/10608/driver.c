#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9640435387128434366ULL;
unsigned short var_3 = (unsigned short)14571;
unsigned short var_4 = (unsigned short)41372;
unsigned long long int var_5 = 2103466108184443842ULL;
signed char var_6 = (signed char)68;
unsigned int var_7 = 2043292794U;
unsigned char var_8 = (unsigned char)23;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
signed char var_12 = (signed char)-79;
unsigned long long int var_13 = 10929958520020702497ULL;
unsigned long long int var_14 = 7801670314587112256ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
