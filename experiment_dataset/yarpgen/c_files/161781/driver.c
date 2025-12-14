#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27191;
unsigned short var_1 = (unsigned short)1986;
unsigned int var_6 = 4244744323U;
long long int var_9 = -1230689240435739998LL;
int zero = 0;
unsigned short var_12 = (unsigned short)22171;
unsigned short var_13 = (unsigned short)34873;
unsigned int var_14 = 4196864148U;
void init() {
}

void checksum() {
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
