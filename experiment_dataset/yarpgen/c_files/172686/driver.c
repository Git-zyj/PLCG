#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)16;
unsigned long long int var_5 = 15973394598774230191ULL;
long long int var_9 = -1124987772799419498LL;
int zero = 0;
unsigned int var_10 = 3578229959U;
unsigned short var_11 = (unsigned short)46853;
unsigned short var_12 = (unsigned short)16177;
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
