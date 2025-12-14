#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2580997381618481036LL;
_Bool var_5 = (_Bool)0;
short var_10 = (short)10297;
short var_11 = (short)-3583;
int zero = 0;
short var_19 = (short)-19913;
long long int var_20 = -7587557176794904798LL;
long long int var_21 = 7470199752605649575LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
