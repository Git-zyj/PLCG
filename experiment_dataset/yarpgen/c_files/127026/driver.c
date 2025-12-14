#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12708895401241920599ULL;
unsigned short var_3 = (unsigned short)64717;
unsigned char var_7 = (unsigned char)209;
signed char var_9 = (signed char)-52;
unsigned short var_11 = (unsigned short)17696;
int zero = 0;
int var_12 = -1147022483;
int var_13 = 1382063775;
unsigned int var_14 = 1153577034U;
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
