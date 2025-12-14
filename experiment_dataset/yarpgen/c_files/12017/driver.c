#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12800;
unsigned short var_3 = (unsigned short)28591;
unsigned short var_9 = (unsigned short)37216;
unsigned char var_13 = (unsigned char)29;
unsigned short var_15 = (unsigned short)22153;
int zero = 0;
unsigned long long int var_16 = 5762103542560989563ULL;
unsigned char var_17 = (unsigned char)190;
unsigned int var_18 = 774407929U;
unsigned int var_19 = 629775727U;
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
