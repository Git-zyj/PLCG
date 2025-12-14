#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)66;
unsigned short var_1 = (unsigned short)45208;
signed char var_8 = (signed char)-64;
signed char var_9 = (signed char)-35;
unsigned long long int var_11 = 15082860789519432101ULL;
signed char var_15 = (signed char)76;
unsigned char var_19 = (unsigned char)107;
int zero = 0;
signed char var_20 = (signed char)-93;
int var_21 = -1895855076;
signed char var_22 = (signed char)4;
int var_23 = -1981816054;
signed char var_24 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
