#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4111063585681539542LL;
long long int var_11 = 5146459230721273490LL;
unsigned char var_16 = (unsigned char)31;
int zero = 0;
unsigned int var_19 = 3270553400U;
unsigned int var_20 = 934129705U;
void init() {
}

void checksum() {
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
