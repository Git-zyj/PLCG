#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39937;
unsigned char var_3 = (unsigned char)119;
unsigned long long int var_5 = 5064652504758157938ULL;
unsigned short var_6 = (unsigned short)64738;
int var_7 = -384816322;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2302795639U;
unsigned long long int var_12 = 14911927183916263682ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
