#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 880184878;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)27181;
unsigned int var_8 = 4162724973U;
unsigned char var_9 = (unsigned char)126;
unsigned int var_14 = 3395166704U;
unsigned char var_17 = (unsigned char)195;
int zero = 0;
unsigned int var_20 = 4138692771U;
unsigned int var_21 = 3452421340U;
void init() {
}

void checksum() {
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
