#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8409195033555467159LL;
unsigned short var_9 = (unsigned short)21285;
int zero = 0;
long long int var_11 = 5286427659241384652LL;
unsigned char var_12 = (unsigned char)92;
long long int var_13 = -4502017751427908194LL;
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
