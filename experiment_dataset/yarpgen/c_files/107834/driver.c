#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-47;
unsigned short var_8 = (unsigned short)6644;
unsigned long long int var_9 = 5121585855758945425ULL;
signed char var_10 = (signed char)-76;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-31627;
unsigned char var_15 = (unsigned char)192;
void init() {
}

void checksum() {
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
