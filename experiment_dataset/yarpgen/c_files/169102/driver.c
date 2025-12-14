#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)117;
long long int var_4 = -2513569934096327880LL;
signed char var_5 = (signed char)-86;
unsigned char var_6 = (unsigned char)200;
_Bool var_8 = (_Bool)1;
int var_12 = -1979975792;
int zero = 0;
signed char var_20 = (signed char)-51;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)90;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
