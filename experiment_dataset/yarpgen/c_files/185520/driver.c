#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3915000648666534746ULL;
long long int var_1 = 6563172320490934968LL;
unsigned long long int var_3 = 3177367473988207801ULL;
int var_5 = 1792447212;
int zero = 0;
int var_11 = -485951894;
int var_12 = 1533438405;
unsigned short var_13 = (unsigned short)53751;
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
