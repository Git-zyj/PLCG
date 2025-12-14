#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22030;
long long int var_4 = 7065579974041329170LL;
long long int var_7 = 2207622166503475762LL;
unsigned int var_8 = 76285834U;
int zero = 0;
unsigned short var_11 = (unsigned short)5739;
short var_12 = (short)-12424;
long long int var_13 = -7734034946018575091LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
