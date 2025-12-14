#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10552;
int var_1 = -896886908;
unsigned char var_2 = (unsigned char)108;
short var_3 = (short)-10910;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)123;
short var_7 = (short)-27533;
long long int var_8 = 6585279206569636673LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 3007974547065627796LL;
signed char var_11 = (signed char)79;
unsigned int var_12 = 786268379U;
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
