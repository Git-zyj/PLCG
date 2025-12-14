#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28864;
unsigned long long int var_2 = 15558598049750472474ULL;
long long int var_5 = -8725306469935168830LL;
long long int var_6 = -3972492263099247117LL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
long long int var_12 = 1546054717680136336LL;
long long int var_13 = -7109992456311642668LL;
int zero = 0;
signed char var_19 = (signed char)-107;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-30;
unsigned short var_22 = (unsigned short)24765;
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
