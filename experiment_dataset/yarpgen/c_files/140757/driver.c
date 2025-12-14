#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)198;
unsigned int var_10 = 1725850263U;
unsigned long long int var_11 = 5473662745715315437ULL;
int zero = 0;
long long int var_14 = -1351003336082978607LL;
unsigned short var_15 = (unsigned short)12284;
void init() {
}

void checksum() {
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
