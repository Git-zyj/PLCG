#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1475789602842796023LL;
unsigned int var_2 = 3721889098U;
short var_9 = (short)19151;
int var_11 = 459522638;
long long int var_12 = 7660514977588511974LL;
int zero = 0;
long long int var_14 = 7304233936945268306LL;
short var_15 = (short)-24765;
unsigned short var_16 = (unsigned short)26890;
short var_17 = (short)-4399;
short var_18 = (short)2920;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
