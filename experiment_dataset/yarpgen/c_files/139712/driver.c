#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14955;
long long int var_4 = 7793637794066741450LL;
short var_9 = (short)-4509;
unsigned int var_11 = 2289509948U;
int zero = 0;
unsigned long long int var_12 = 10848173050704926397ULL;
unsigned short var_13 = (unsigned short)26630;
short var_14 = (short)-20594;
unsigned short var_15 = (unsigned short)2602;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
