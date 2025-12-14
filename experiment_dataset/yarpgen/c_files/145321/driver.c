#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)32619;
_Bool var_6 = (_Bool)0;
int var_8 = -1263161632;
unsigned char var_9 = (unsigned char)31;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 187368782;
void init() {
}

void checksum() {
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
