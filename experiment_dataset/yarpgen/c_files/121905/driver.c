#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-110;
signed char var_9 = (signed char)78;
unsigned long long int var_11 = 1753530577254663728ULL;
long long int var_13 = -2380139755344063171LL;
unsigned long long int var_18 = 13867481059413138968ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)4371;
signed char var_20 = (signed char)106;
unsigned long long int var_21 = 13679932291362889123ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
