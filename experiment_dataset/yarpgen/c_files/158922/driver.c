#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)61;
long long int var_8 = -1306122860936870317LL;
int var_9 = -114049401;
signed char var_10 = (signed char)71;
unsigned long long int var_11 = 5622046825662535116ULL;
int zero = 0;
signed char var_12 = (signed char)-90;
unsigned int var_13 = 1711511618U;
long long int var_14 = -4792340849584634307LL;
unsigned char var_15 = (unsigned char)172;
void init() {
}

void checksum() {
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
