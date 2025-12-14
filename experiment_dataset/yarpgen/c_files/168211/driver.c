#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2302578191U;
long long int var_8 = -6708763076357365104LL;
unsigned short var_9 = (unsigned short)20581;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)24;
int var_14 = 1751750189;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
