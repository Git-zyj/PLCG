#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5353187447715938755LL;
int var_2 = -661400800;
long long int var_3 = 226519390517720953LL;
unsigned long long int var_5 = 3848181186919309339ULL;
unsigned int var_7 = 4234271313U;
unsigned char var_8 = (unsigned char)102;
_Bool var_10 = (_Bool)1;
long long int var_11 = 3571223936800997868LL;
unsigned short var_12 = (unsigned short)50264;
int zero = 0;
signed char var_13 = (signed char)-94;
unsigned short var_14 = (unsigned short)1212;
short var_15 = (short)6964;
short var_16 = (short)-304;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
