#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
long long int var_3 = 9027441825461100039LL;
signed char var_4 = (signed char)-49;
short var_5 = (short)-16735;
signed char var_6 = (signed char)98;
int var_7 = 1968328458;
unsigned long long int var_9 = 9659583430045550335ULL;
unsigned long long int var_10 = 17522754647070805103ULL;
short var_11 = (short)-13502;
unsigned long long int var_14 = 589134391605965742ULL;
short var_16 = (short)-4338;
long long int var_17 = -5877731956419133501LL;
int zero = 0;
short var_18 = (short)22403;
signed char var_19 = (signed char)117;
unsigned int var_20 = 1822750806U;
unsigned int var_21 = 2801560223U;
unsigned char var_22 = (unsigned char)25;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
