#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-94;
unsigned short var_3 = (unsigned short)384;
signed char var_7 = (signed char)44;
unsigned char var_8 = (unsigned char)194;
unsigned char var_9 = (unsigned char)121;
int zero = 0;
short var_12 = (short)8910;
int var_13 = 1679176171;
void init() {
}

void checksum() {
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
