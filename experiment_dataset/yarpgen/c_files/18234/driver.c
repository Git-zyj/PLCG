#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8698235269048915204LL;
unsigned int var_3 = 1674002558U;
short var_8 = (short)31305;
unsigned short var_9 = (unsigned short)62524;
int zero = 0;
unsigned long long int var_11 = 3039856115984187627ULL;
unsigned short var_12 = (unsigned short)18823;
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
