#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10696;
unsigned long long int var_1 = 1593129336477272458ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)209;
signed char var_7 = (signed char)-93;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 11109720648369208135ULL;
int zero = 0;
unsigned long long int var_12 = 4580936158787707995ULL;
unsigned int var_13 = 839494424U;
int var_14 = -1410231905;
unsigned short var_15 = (unsigned short)12164;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
