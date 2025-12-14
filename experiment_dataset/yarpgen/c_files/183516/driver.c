#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60530;
signed char var_2 = (signed char)-1;
signed char var_4 = (signed char)-71;
unsigned short var_8 = (unsigned short)62908;
signed char var_9 = (signed char)5;
unsigned short var_10 = (unsigned short)40006;
int zero = 0;
unsigned int var_12 = 1235990749U;
unsigned char var_13 = (unsigned char)194;
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
