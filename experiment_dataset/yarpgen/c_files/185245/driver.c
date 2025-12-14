#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1731071096U;
unsigned char var_4 = (unsigned char)206;
unsigned char var_11 = (unsigned char)125;
unsigned short var_14 = (unsigned short)52546;
unsigned long long int var_17 = 8450577319605731094ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 962939705;
short var_20 = (short)22608;
unsigned short var_21 = (unsigned short)20007;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
