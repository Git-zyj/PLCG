#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 101314200;
signed char var_1 = (signed char)-72;
unsigned char var_3 = (unsigned char)95;
unsigned int var_5 = 2236562887U;
unsigned int var_6 = 1986252293U;
signed char var_7 = (signed char)59;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2160801733U;
unsigned int var_11 = 4155758039U;
int var_12 = -1270967942;
short var_13 = (short)18320;
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
