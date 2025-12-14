#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1318905571;
_Bool var_2 = (_Bool)1;
int var_3 = -1304517039;
unsigned short var_6 = (unsigned short)46918;
unsigned short var_8 = (unsigned short)6518;
signed char var_9 = (signed char)51;
int zero = 0;
int var_10 = -1816768649;
unsigned short var_11 = (unsigned short)19445;
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
