#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5494190282009666692LL;
unsigned int var_3 = 1977531320U;
unsigned short var_4 = (unsigned short)62314;
_Bool var_8 = (_Bool)0;
unsigned short var_15 = (unsigned short)13313;
signed char var_17 = (signed char)75;
unsigned char var_18 = (unsigned char)98;
int zero = 0;
unsigned long long int var_19 = 17249123498987469919ULL;
unsigned char var_20 = (unsigned char)121;
unsigned char var_21 = (unsigned char)78;
unsigned long long int var_22 = 270898537530740996ULL;
unsigned long long int var_23 = 2754282263782953208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
