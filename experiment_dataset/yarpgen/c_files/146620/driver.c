#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8896920150125460697ULL;
unsigned int var_7 = 975436648U;
unsigned long long int var_8 = 7169855133453408319ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = -1237634644;
unsigned char var_13 = (unsigned char)162;
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
