#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -815737484856999233LL;
long long int var_6 = 1001511091158015441LL;
unsigned char var_7 = (unsigned char)146;
int zero = 0;
long long int var_17 = -4690569006716809362LL;
long long int var_18 = -1059442553376207296LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
