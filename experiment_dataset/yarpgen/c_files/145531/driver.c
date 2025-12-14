#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15152947886652602155ULL;
long long int var_5 = -1022404468009616561LL;
signed char var_7 = (signed char)-124;
unsigned short var_9 = (unsigned short)50693;
int zero = 0;
signed char var_11 = (signed char)-1;
unsigned char var_12 = (unsigned char)78;
long long int var_13 = -3324519373882013030LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
