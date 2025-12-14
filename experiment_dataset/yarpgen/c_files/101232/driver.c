#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17858052993746797581ULL;
int var_3 = 1425157348;
int var_8 = -1485898717;
signed char var_9 = (signed char)34;
int zero = 0;
unsigned char var_11 = (unsigned char)214;
short var_12 = (short)4513;
short var_13 = (short)27932;
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
