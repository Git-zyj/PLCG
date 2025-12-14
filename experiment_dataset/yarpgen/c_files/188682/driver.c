#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12173496254980489760ULL;
int var_7 = -1171717919;
unsigned long long int var_10 = 9991152111294329350ULL;
unsigned int var_14 = 2108575401U;
int var_15 = 1963924738;
long long int var_17 = 5885725531717402159LL;
int zero = 0;
long long int var_20 = -8236792772648537592LL;
unsigned short var_21 = (unsigned short)835;
unsigned char var_22 = (unsigned char)47;
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
