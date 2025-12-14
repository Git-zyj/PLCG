#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7524631636042436470ULL;
unsigned long long int var_1 = 3507369903224187023ULL;
unsigned char var_2 = (unsigned char)228;
signed char var_3 = (signed char)-32;
unsigned char var_6 = (unsigned char)75;
unsigned char var_7 = (unsigned char)169;
unsigned long long int var_8 = 13834407990969177098ULL;
unsigned int var_9 = 888178024U;
int zero = 0;
unsigned char var_12 = (unsigned char)69;
unsigned char var_13 = (unsigned char)3;
unsigned long long int var_14 = 6674396049637047919ULL;
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
