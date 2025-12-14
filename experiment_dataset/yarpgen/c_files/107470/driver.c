#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1895847319829667130LL;
long long int var_3 = 5341357935255945784LL;
int var_4 = -1749004955;
int var_6 = 456162832;
unsigned short var_10 = (unsigned short)59349;
int zero = 0;
unsigned short var_11 = (unsigned short)44331;
int var_12 = 1838730747;
long long int var_13 = 3236055483547721341LL;
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
