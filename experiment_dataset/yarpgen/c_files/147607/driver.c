#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9343678036404935455ULL;
unsigned long long int var_6 = 9742535557124413028ULL;
short var_15 = (short)5484;
int zero = 0;
unsigned long long int var_18 = 11006039788759294063ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)8782;
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
