#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)5;
signed char var_4 = (signed char)91;
unsigned short var_8 = (unsigned short)4952;
_Bool var_10 = (_Bool)0;
short var_12 = (short)20862;
long long int var_14 = 5725345828884420834LL;
unsigned short var_15 = (unsigned short)5103;
unsigned char var_16 = (unsigned char)111;
int zero = 0;
unsigned long long int var_20 = 5699495160349542073ULL;
unsigned short var_21 = (unsigned short)46197;
void init() {
}

void checksum() {
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
