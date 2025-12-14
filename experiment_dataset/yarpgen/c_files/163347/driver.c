#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42055;
unsigned long long int var_1 = 8116859295829454527ULL;
unsigned int var_2 = 3981728190U;
unsigned short var_4 = (unsigned short)44934;
unsigned short var_5 = (unsigned short)21832;
long long int var_6 = -8342144752232314848LL;
int var_7 = 39571469;
unsigned long long int var_8 = 6791707362538811289ULL;
unsigned long long int var_9 = 13167722353836458135ULL;
int zero = 0;
long long int var_10 = -2462339783763380715LL;
unsigned int var_11 = 2270295355U;
long long int var_12 = -6549982294497522209LL;
signed char var_13 = (signed char)-6;
unsigned char var_14 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
