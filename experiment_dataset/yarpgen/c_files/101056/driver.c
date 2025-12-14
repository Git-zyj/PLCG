#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
signed char var_10 = (signed char)-56;
long long int var_13 = 3558235843370980876LL;
int var_15 = -66907391;
int zero = 0;
int var_18 = -659195621;
unsigned char var_19 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
