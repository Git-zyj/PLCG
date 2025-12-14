#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 848846034;
unsigned long long int var_11 = 10134879039642042607ULL;
long long int var_13 = -523413361918219635LL;
unsigned char var_14 = (unsigned char)92;
long long int var_16 = 2706422042309794322LL;
int zero = 0;
int var_20 = 1047848555;
unsigned short var_21 = (unsigned short)31364;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
