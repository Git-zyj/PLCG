#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8103337073106524343LL;
unsigned short var_7 = (unsigned short)55718;
int var_8 = 2145118521;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 128165670757406753LL;
unsigned long long int var_16 = 10367612912017765734ULL;
unsigned short var_17 = (unsigned short)60977;
signed char var_18 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
