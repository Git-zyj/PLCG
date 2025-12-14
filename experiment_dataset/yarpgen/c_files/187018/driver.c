#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1397300557;
signed char var_4 = (signed char)-57;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)34;
int var_15 = 1816472493;
unsigned char var_18 = (unsigned char)191;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-35;
unsigned char var_22 = (unsigned char)254;
void init() {
}

void checksum() {
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
