#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 207887179U;
unsigned short var_4 = (unsigned short)36203;
unsigned char var_5 = (unsigned char)133;
unsigned long long int var_6 = 13430949607888950671ULL;
int var_7 = -715202132;
long long int var_10 = -9135955818988405612LL;
int var_15 = -1280055365;
int zero = 0;
int var_18 = -1196645337;
unsigned int var_19 = 4092385007U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)28972;
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
