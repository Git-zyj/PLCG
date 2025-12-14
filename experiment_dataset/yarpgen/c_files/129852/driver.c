#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
short var_1 = (short)-29342;
unsigned long long int var_2 = 5023867691422769487ULL;
unsigned long long int var_3 = 11768814970763983702ULL;
unsigned long long int var_7 = 4088713080949826187ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1986492441;
unsigned short var_11 = (unsigned short)34340;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
