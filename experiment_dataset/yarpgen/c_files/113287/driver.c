#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24319;
short var_1 = (short)15906;
short var_2 = (short)-5747;
unsigned long long int var_4 = 10893087446301298943ULL;
short var_5 = (short)3274;
short var_6 = (short)18822;
int var_7 = -2108896692;
short var_9 = (short)20909;
short var_10 = (short)-647;
short var_11 = (short)15695;
unsigned int var_12 = 3292151988U;
int var_13 = 1678837294;
int zero = 0;
unsigned int var_17 = 3365672375U;
int var_18 = 704869381;
short var_19 = (short)-20418;
short var_20 = (short)25706;
short var_21 = (short)30187;
short var_22 = (short)11349;
short var_23 = (short)-21086;
short var_24 = (short)25945;
short var_25 = (short)-20481;
int var_26 = 2109953914;
short var_27 = (short)-28520;
int var_28 = 402757682;
short var_29 = (short)-4844;
short var_30 = (short)-31229;
short var_31 = (short)-14732;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
