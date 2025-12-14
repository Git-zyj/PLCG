#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27177;
short var_6 = (short)-8566;
unsigned int var_7 = 758178530U;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)46;
unsigned char var_18 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
