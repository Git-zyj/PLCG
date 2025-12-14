#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8707329274709214195ULL;
unsigned long long int var_1 = 13655440227153106572ULL;
unsigned long long int var_3 = 17904214976492593623ULL;
unsigned long long int var_9 = 15460909327510892388ULL;
unsigned long long int var_12 = 11614463947671071792ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)0;
_Bool var_18 = (_Bool)1;
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
