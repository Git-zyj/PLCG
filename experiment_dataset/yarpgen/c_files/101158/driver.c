#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned int var_2 = 3580496255U;
signed char var_4 = (signed char)72;
int var_5 = -960312639;
unsigned char var_8 = (unsigned char)234;
unsigned long long int var_10 = 1979423470692942525ULL;
unsigned char var_11 = (unsigned char)98;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -479107035;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
