#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
signed char var_2 = (signed char)22;
signed char var_3 = (signed char)8;
signed char var_5 = (signed char)32;
signed char var_6 = (signed char)-122;
long long int var_7 = -1472228338650735423LL;
signed char var_8 = (signed char)-27;
unsigned int var_9 = 2353602423U;
int zero = 0;
short var_10 = (short)-7177;
signed char var_11 = (signed char)-111;
signed char var_12 = (signed char)-34;
short var_13 = (short)21434;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
