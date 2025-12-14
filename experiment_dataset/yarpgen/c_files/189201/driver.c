#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1150557550U;
unsigned char var_6 = (unsigned char)46;
unsigned int var_7 = 3403379011U;
unsigned short var_11 = (unsigned short)36570;
unsigned long long int var_13 = 2167332002510860563ULL;
long long int var_16 = -3391303213273488155LL;
unsigned int var_17 = 3291352520U;
int zero = 0;
unsigned long long int var_19 = 4633188337099189042ULL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)58412;
_Bool var_22 = (_Bool)1;
long long int var_23 = -6517387705735954808LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
