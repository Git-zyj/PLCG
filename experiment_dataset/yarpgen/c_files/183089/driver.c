#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22634;
unsigned char var_2 = (unsigned char)84;
signed char var_3 = (signed char)-110;
short var_4 = (short)31966;
unsigned int var_5 = 2548502301U;
unsigned char var_7 = (unsigned char)39;
unsigned int var_8 = 862025072U;
unsigned int var_9 = 588205967U;
unsigned int var_10 = 3584989233U;
int zero = 0;
unsigned int var_11 = 3054930417U;
long long int var_12 = -1498880710443672863LL;
long long int var_13 = 5478990823270497212LL;
long long int var_14 = -7568749028189071684LL;
unsigned short var_15 = (unsigned short)37135;
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
