#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -853324307;
int var_18 = -620571358;
unsigned long long int var_19 = 2222030993952499030ULL;
int zero = 0;
int var_20 = -129507497;
unsigned char var_21 = (unsigned char)133;
unsigned long long int var_22 = 17384943223362408267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
