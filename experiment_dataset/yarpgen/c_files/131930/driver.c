#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)71;
int var_7 = -358223868;
unsigned long long int var_11 = 7583151700501645938ULL;
unsigned int var_12 = 246068336U;
int var_16 = -1667928341;
int var_18 = 1508775417;
int zero = 0;
int var_19 = 1288661604;
long long int var_20 = -4086952203038415827LL;
int var_21 = -1984362822;
void init() {
}

void checksum() {
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
