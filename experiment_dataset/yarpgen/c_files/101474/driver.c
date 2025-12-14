#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3731869246U;
int var_2 = -438837830;
unsigned char var_7 = (unsigned char)202;
long long int var_14 = -2594194803865068672LL;
int zero = 0;
unsigned long long int var_18 = 1782774902226804658ULL;
unsigned long long int var_19 = 2446777399765502982ULL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)71;
void init() {
}

void checksum() {
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
