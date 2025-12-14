#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9802104353368769831ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)11776;
long long int var_6 = -546547426203562819LL;
short var_13 = (short)-20868;
signed char var_14 = (signed char)-63;
unsigned char var_19 = (unsigned char)214;
int zero = 0;
long long int var_20 = -8535266145267640994LL;
signed char var_21 = (signed char)-107;
void init() {
}

void checksum() {
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
