#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 455621500;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 16653128023736765932ULL;
unsigned int var_6 = 2478871142U;
unsigned short var_8 = (unsigned short)27203;
unsigned char var_9 = (unsigned char)106;
short var_10 = (short)18098;
int zero = 0;
signed char var_13 = (signed char)-31;
signed char var_14 = (signed char)123;
void init() {
}

void checksum() {
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
