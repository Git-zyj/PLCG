#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1453297657902496128ULL;
unsigned long long int var_4 = 731602160536344757ULL;
unsigned char var_5 = (unsigned char)119;
unsigned short var_8 = (unsigned short)40412;
unsigned long long int var_9 = 6976343506177380277ULL;
int var_10 = 1311048965;
int var_13 = 1675179002;
int var_14 = -965077514;
unsigned short var_15 = (unsigned short)9519;
long long int var_16 = -624330747669748015LL;
unsigned int var_17 = 4110301296U;
int zero = 0;
signed char var_18 = (signed char)-78;
signed char var_19 = (signed char)-87;
unsigned long long int var_20 = 12285055145818022732ULL;
signed char var_21 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
