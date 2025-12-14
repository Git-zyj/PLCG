#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3590686224U;
unsigned char var_4 = (unsigned char)101;
long long int var_6 = 4189202165892425160LL;
short var_8 = (short)31420;
short var_10 = (short)31442;
short var_11 = (short)-9484;
int zero = 0;
long long int var_12 = -8042694173851794011LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
