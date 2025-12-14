#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
int var_1 = 1629043607;
unsigned int var_2 = 3207525778U;
short var_3 = (short)-27658;
short var_5 = (short)-2578;
unsigned int var_6 = 3732768613U;
int var_7 = 617839491;
short var_8 = (short)1527;
_Bool var_9 = (_Bool)1;
long long int var_10 = -8351261601434706560LL;
unsigned long long int var_11 = 8534406989557006382ULL;
unsigned int var_12 = 845173347U;
long long int var_13 = 5843437869554637771LL;
unsigned int var_15 = 1786805290U;
int zero = 0;
int var_16 = 1509609602;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-12127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
