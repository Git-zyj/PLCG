#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 470297794;
unsigned char var_7 = (unsigned char)145;
short var_8 = (short)-315;
unsigned long long int var_16 = 6574748034752027302ULL;
int zero = 0;
unsigned int var_19 = 224662846U;
short var_20 = (short)10195;
unsigned int var_21 = 2727387311U;
_Bool var_22 = (_Bool)1;
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
