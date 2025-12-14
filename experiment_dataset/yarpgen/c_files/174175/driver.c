#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 640303580;
int var_1 = -1744961467;
short var_3 = (short)-28530;
int var_4 = -572527378;
short var_5 = (short)-3650;
int var_7 = 521725893;
short var_8 = (short)30476;
short var_9 = (short)18138;
int var_11 = 198233165;
long long int var_12 = -1985599655158807908LL;
_Bool var_13 = (_Bool)0;
short var_16 = (short)11554;
signed char var_17 = (signed char)-35;
short var_18 = (short)803;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-11;
short var_21 = (short)30188;
int var_22 = -717897448;
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
