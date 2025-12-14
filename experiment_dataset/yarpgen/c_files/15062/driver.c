#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9770;
int var_2 = -1339128935;
short var_4 = (short)15764;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)183;
long long int var_9 = -6768150439045142130LL;
unsigned short var_11 = (unsigned short)3098;
int zero = 0;
int var_13 = -1338422555;
signed char var_14 = (signed char)45;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
