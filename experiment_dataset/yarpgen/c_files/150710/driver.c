#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -25956868;
long long int var_1 = -5951505762877801844LL;
unsigned char var_3 = (unsigned char)87;
int var_4 = -1510951007;
long long int var_5 = 5143360544273528137LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -655722551635290992LL;
unsigned char var_8 = (unsigned char)229;
int var_9 = 89290958;
int var_11 = -1744215510;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
long long int var_13 = 967644505442427170LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
