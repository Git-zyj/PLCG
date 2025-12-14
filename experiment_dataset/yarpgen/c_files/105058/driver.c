#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12147870052976520424ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-12987;
long long int var_12 = -3614887655563084528LL;
short var_13 = (short)289;
unsigned char var_15 = (unsigned char)135;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)12789;
short var_21 = (short)-16799;
long long int var_22 = 1342764682345379902LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
