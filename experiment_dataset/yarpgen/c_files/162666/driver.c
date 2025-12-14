#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 3905135303454461995ULL;
signed char var_3 = (signed char)-97;
unsigned char var_4 = (unsigned char)118;
int var_8 = 93188819;
unsigned short var_10 = (unsigned short)59318;
unsigned short var_12 = (unsigned short)764;
int zero = 0;
int var_13 = -1952233139;
long long int var_14 = -230791307823687732LL;
long long int var_15 = -6890564681856259551LL;
long long int var_16 = -4557355354538623417LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
