#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17304;
unsigned long long int var_4 = 17122435943271628861ULL;
unsigned long long int var_9 = 4624070452761095906ULL;
signed char var_10 = (signed char)6;
unsigned long long int var_13 = 10445188210406431030ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)105;
unsigned char var_18 = (unsigned char)171;
long long int var_19 = 9135551907024721582LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
