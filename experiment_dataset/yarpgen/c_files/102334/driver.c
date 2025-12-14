#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17370;
unsigned short var_4 = (unsigned short)18645;
short var_7 = (short)-22083;
unsigned int var_8 = 3754602748U;
short var_9 = (short)18003;
int zero = 0;
int var_12 = 1166282241;
unsigned int var_13 = 123981424U;
unsigned char var_14 = (unsigned char)78;
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
