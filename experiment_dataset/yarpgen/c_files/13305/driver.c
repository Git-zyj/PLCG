#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1453413530;
short var_2 = (short)-27209;
long long int var_3 = 5000312588902360132LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 10721959493122697348ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)225;
unsigned short var_13 = (unsigned short)45725;
signed char var_14 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
