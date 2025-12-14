#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5734469031493617545LL;
long long int var_3 = 1298593539657908028LL;
long long int var_4 = 8495836080827224274LL;
signed char var_6 = (signed char)-103;
short var_10 = (short)24427;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)3677;
unsigned short var_14 = (unsigned short)9837;
short var_15 = (short)-29867;
void init() {
}

void checksum() {
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
