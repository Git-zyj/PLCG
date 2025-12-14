#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -2540634958027984810LL;
long long int var_11 = 8863348510042775558LL;
int var_13 = 578422952;
signed char var_16 = (signed char)-39;
int zero = 0;
long long int var_20 = -2021540550245156361LL;
unsigned char var_21 = (unsigned char)57;
signed char var_22 = (signed char)-44;
int var_23 = 1289858789;
short var_24 = (short)14001;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
