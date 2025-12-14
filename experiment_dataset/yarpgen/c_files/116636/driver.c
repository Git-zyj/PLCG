#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)249;
unsigned long long int var_5 = 16878115785350098590ULL;
unsigned short var_9 = (unsigned short)13097;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17631245272475914151ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1262580207;
long long int var_19 = -4092049572549820922LL;
unsigned short var_20 = (unsigned short)54108;
int var_21 = 486370097;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
