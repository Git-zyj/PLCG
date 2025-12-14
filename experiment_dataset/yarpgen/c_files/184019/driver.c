#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30910;
unsigned char var_4 = (unsigned char)138;
unsigned char var_8 = (unsigned char)93;
int var_9 = -2027003932;
unsigned int var_11 = 3608181157U;
int var_13 = -324336768;
int zero = 0;
short var_19 = (short)-4940;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2685384031589688911ULL;
int var_22 = -122307299;
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
