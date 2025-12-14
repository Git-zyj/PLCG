#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1363357263;
int var_2 = 1344698606;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 1579289897U;
int var_11 = 926687502;
unsigned int var_12 = 2798640687U;
unsigned short var_13 = (unsigned short)58952;
unsigned long long int var_16 = 12119701662879007160ULL;
int zero = 0;
unsigned long long int var_19 = 16283399723533574142ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)43955;
unsigned short var_22 = (unsigned short)62950;
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
