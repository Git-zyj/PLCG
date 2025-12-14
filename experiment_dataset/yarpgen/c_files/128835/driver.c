#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2002486808901383206LL;
unsigned short var_6 = (unsigned short)25223;
int var_9 = 1829715089;
short var_11 = (short)-31176;
int var_13 = 120789614;
signed char var_14 = (signed char)-26;
unsigned char var_16 = (unsigned char)126;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-2;
int var_21 = 713868060;
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
