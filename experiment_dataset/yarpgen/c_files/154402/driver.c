#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -331512765177960348LL;
unsigned long long int var_4 = 11429704660726366963ULL;
unsigned long long int var_6 = 3191933913852336284ULL;
unsigned long long int var_7 = 2875026305145594475ULL;
unsigned int var_17 = 2865503234U;
signed char var_18 = (signed char)8;
int zero = 0;
unsigned char var_19 = (unsigned char)66;
short var_20 = (short)-17488;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-29586;
void init() {
}

void checksum() {
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
