#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1068;
long long int var_8 = 3388126784793240624LL;
long long int var_10 = -3114887983485813558LL;
unsigned short var_17 = (unsigned short)39961;
int zero = 0;
unsigned short var_18 = (unsigned short)62577;
long long int var_19 = 470388278443153936LL;
unsigned short var_20 = (unsigned short)23303;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
