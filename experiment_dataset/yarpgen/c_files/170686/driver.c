#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
signed char var_3 = (signed char)-24;
unsigned char var_4 = (unsigned char)241;
short var_9 = (short)20947;
unsigned int var_14 = 3475252020U;
unsigned short var_18 = (unsigned short)43586;
int zero = 0;
unsigned char var_19 = (unsigned char)92;
short var_20 = (short)10653;
long long int var_21 = -3477901771479565045LL;
unsigned char var_22 = (unsigned char)106;
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
