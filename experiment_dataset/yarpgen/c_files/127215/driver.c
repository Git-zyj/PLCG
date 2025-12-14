#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1526350211730875312LL;
unsigned int var_6 = 3983555929U;
unsigned short var_8 = (unsigned short)11234;
short var_13 = (short)19060;
short var_14 = (short)9749;
signed char var_15 = (signed char)72;
long long int var_16 = -916185913616215180LL;
int zero = 0;
unsigned short var_19 = (unsigned short)3258;
unsigned short var_20 = (unsigned short)38482;
int var_21 = -299555361;
unsigned short var_22 = (unsigned short)58062;
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
