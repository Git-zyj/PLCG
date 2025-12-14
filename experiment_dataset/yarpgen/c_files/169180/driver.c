#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1001459208;
unsigned short var_6 = (unsigned short)1465;
unsigned long long int var_10 = 2244323655229889348ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)38179;
_Bool var_18 = (_Bool)1;
int var_19 = -1053104759;
unsigned int var_20 = 305178212U;
int var_21 = -2033295254;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
