#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7554674298454410291LL;
long long int var_1 = 5440543954507476781LL;
short var_2 = (short)-29709;
unsigned char var_9 = (unsigned char)156;
int zero = 0;
short var_12 = (short)-18379;
short var_13 = (short)-29082;
void init() {
}

void checksum() {
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
