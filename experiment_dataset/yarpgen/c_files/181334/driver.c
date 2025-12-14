#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)228;
unsigned short var_3 = (unsigned short)12301;
_Bool var_4 = (_Bool)1;
long long int var_6 = 7017142506344891358LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8400566341649650607LL;
unsigned short var_12 = (unsigned short)52431;
int zero = 0;
unsigned short var_13 = (unsigned short)59691;
long long int var_14 = 2321176338417527402LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
