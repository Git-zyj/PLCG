#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1549306206U;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)33369;
unsigned char var_8 = (unsigned char)252;
unsigned int var_10 = 621736679U;
int zero = 0;
unsigned long long int var_14 = 17854596354843547629ULL;
unsigned char var_15 = (unsigned char)137;
unsigned char var_16 = (unsigned char)180;
unsigned char var_17 = (unsigned char)200;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
