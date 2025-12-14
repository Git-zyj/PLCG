#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7336;
unsigned char var_3 = (unsigned char)90;
unsigned long long int var_6 = 9004015297771940465ULL;
unsigned int var_9 = 4084648865U;
int zero = 0;
unsigned short var_10 = (unsigned short)16174;
unsigned char var_11 = (unsigned char)254;
unsigned long long int var_12 = 17682703389225235427ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
