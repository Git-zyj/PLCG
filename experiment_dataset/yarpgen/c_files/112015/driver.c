#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 80300524;
unsigned int var_2 = 1984240924U;
signed char var_5 = (signed char)-65;
signed char var_6 = (signed char)-8;
int var_7 = -875135012;
unsigned long long int var_8 = 8952175556693888538ULL;
unsigned long long int var_9 = 15013441514717465735ULL;
unsigned long long int var_13 = 8532421586790818301ULL;
unsigned long long int var_14 = 6350680136223784016ULL;
unsigned long long int var_15 = 554798324485346726ULL;
unsigned int var_16 = 85696199U;
int zero = 0;
int var_19 = -2054496250;
signed char var_20 = (signed char)20;
int var_21 = 1083289671;
unsigned long long int var_22 = 13005570310267827414ULL;
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
