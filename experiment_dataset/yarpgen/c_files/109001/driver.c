#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)126;
unsigned long long int var_6 = 4461721806382887238ULL;
unsigned char var_9 = (unsigned char)132;
int zero = 0;
short var_12 = (short)18656;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 580340847U;
unsigned int var_15 = 876382135U;
unsigned short var_16 = (unsigned short)23492;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
