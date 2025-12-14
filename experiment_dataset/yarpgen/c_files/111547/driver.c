#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5054460446363943598LL;
long long int var_1 = 24070284892343434LL;
unsigned char var_3 = (unsigned char)82;
long long int var_6 = -2762823136481475625LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1430117753U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)19397;
long long int var_13 = 4045656288954672754LL;
void init() {
}

void checksum() {
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
