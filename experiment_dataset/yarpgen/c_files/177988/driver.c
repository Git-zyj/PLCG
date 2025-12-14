#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7837458831138087866ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)62685;
long long int var_8 = 6994276217949145977LL;
unsigned long long int var_11 = 15618904452852090235ULL;
unsigned long long int var_14 = 3536100455905159944ULL;
int zero = 0;
short var_18 = (short)-16329;
long long int var_19 = 7812842192198217000LL;
unsigned long long int var_20 = 7017922983177706016ULL;
signed char var_21 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
