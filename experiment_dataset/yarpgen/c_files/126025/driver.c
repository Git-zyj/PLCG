#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)71;
unsigned short var_3 = (unsigned short)11673;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 3001357421U;
int var_8 = -1639924744;
unsigned int var_9 = 819678925U;
int zero = 0;
short var_12 = (short)-31509;
unsigned char var_13 = (unsigned char)121;
_Bool var_14 = (_Bool)0;
short var_15 = (short)15662;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
