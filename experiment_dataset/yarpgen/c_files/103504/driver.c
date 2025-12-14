#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4041026667318402927LL;
int var_2 = -1002202979;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)63333;
unsigned char var_8 = (unsigned char)146;
unsigned char var_9 = (unsigned char)39;
int zero = 0;
unsigned char var_11 = (unsigned char)34;
int var_12 = -763459363;
unsigned long long int var_13 = 7735545536537081067ULL;
int var_14 = 1571862762;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
