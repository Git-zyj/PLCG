#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)80;
unsigned char var_4 = (unsigned char)220;
unsigned long long int var_11 = 2084976660505273665ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = 939488724185458973LL;
unsigned char var_17 = (unsigned char)151;
unsigned int var_18 = 4252732537U;
int var_19 = -1753963093;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
