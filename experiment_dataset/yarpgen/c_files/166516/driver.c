#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
signed char var_1 = (signed char)-118;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)2;
signed char var_7 = (signed char)80;
unsigned char var_8 = (unsigned char)118;
unsigned char var_10 = (unsigned char)167;
signed char var_17 = (signed char)125;
int zero = 0;
unsigned char var_18 = (unsigned char)72;
unsigned char var_19 = (unsigned char)164;
signed char var_20 = (signed char)103;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
