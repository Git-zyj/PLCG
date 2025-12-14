#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16630;
unsigned int var_1 = 4071723629U;
short var_2 = (short)-17355;
long long int var_4 = 1672812225181296509LL;
long long int var_6 = -1928708795752415886LL;
int var_7 = 1226191491;
unsigned long long int var_10 = 18134066165402882408ULL;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 3142644379U;
int zero = 0;
unsigned short var_18 = (unsigned short)4583;
int var_19 = 546675141;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
