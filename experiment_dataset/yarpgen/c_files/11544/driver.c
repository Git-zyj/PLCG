#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28031;
int var_4 = -1732933812;
unsigned long long int var_5 = 9425237656919705859ULL;
long long int var_6 = 7926168041725590058LL;
signed char var_7 = (signed char)-115;
unsigned short var_9 = (unsigned short)42673;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
unsigned int var_12 = 945848663U;
unsigned int var_13 = 2668382197U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
