#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3863964469U;
unsigned int var_1 = 2498581022U;
unsigned int var_2 = 1563036584U;
long long int var_3 = 2756412633093102016LL;
unsigned long long int var_4 = 10133785437770974738ULL;
unsigned char var_6 = (unsigned char)145;
long long int var_8 = 4265418384233759348LL;
unsigned char var_9 = (unsigned char)19;
int zero = 0;
int var_13 = 1883162559;
unsigned char var_14 = (unsigned char)97;
unsigned int var_15 = 1006811843U;
signed char var_16 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
