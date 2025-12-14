#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
int var_1 = -1278160585;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)112;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)25;
signed char var_14 = (signed char)-77;
unsigned char var_15 = (unsigned char)140;
int zero = 0;
signed char var_18 = (signed char)46;
unsigned char var_19 = (unsigned char)17;
int var_20 = 1607199160;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
