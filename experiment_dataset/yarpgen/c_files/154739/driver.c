#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)19;
unsigned long long int var_4 = 10978627518740625392ULL;
unsigned short var_8 = (unsigned short)819;
long long int var_9 = -329364637682915307LL;
short var_10 = (short)-4260;
int var_12 = 1477597836;
signed char var_13 = (signed char)72;
unsigned char var_14 = (unsigned char)125;
short var_15 = (short)30318;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
unsigned long long int var_19 = 10125753137813162902ULL;
int var_20 = 579473078;
signed char var_21 = (signed char)-15;
unsigned long long int var_22 = 11765785267187871760ULL;
_Bool var_23 = (_Bool)0;
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
