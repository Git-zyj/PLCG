#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned long long int var_12 = 5276674749445871107ULL;
unsigned long long int var_18 = 14771434681851892764ULL;
int zero = 0;
long long int var_20 = -3916441635095883055LL;
unsigned int var_21 = 928070970U;
unsigned long long int var_22 = 3662212469674621598ULL;
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
