#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10404;
int var_2 = -335722007;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)51881;
unsigned char var_11 = (unsigned char)94;
long long int var_12 = 6648698064503743024LL;
int zero = 0;
unsigned char var_13 = (unsigned char)31;
long long int var_14 = 5519642868781961912LL;
unsigned long long int var_15 = 6636902883577343379ULL;
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
