#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8575012778231859804LL;
long long int var_3 = 4962155229443756655LL;
unsigned char var_5 = (unsigned char)84;
unsigned short var_7 = (unsigned short)24749;
int zero = 0;
unsigned char var_11 = (unsigned char)16;
long long int var_12 = 5181293260971335977LL;
long long int var_13 = -7677216152996816810LL;
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
