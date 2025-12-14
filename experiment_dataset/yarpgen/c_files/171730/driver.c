#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)19980;
long long int var_4 = 1604744776745038116LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 12202157993361099260ULL;
short var_10 = (short)-28256;
unsigned short var_12 = (unsigned short)60295;
int zero = 0;
int var_14 = 1277028905;
long long int var_15 = -4883491604261030518LL;
unsigned char var_16 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
