#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7485236326817036296LL;
unsigned short var_2 = (unsigned short)19420;
signed char var_3 = (signed char)19;
signed char var_5 = (signed char)-55;
unsigned char var_7 = (unsigned char)165;
long long int var_8 = 6483876479102549780LL;
unsigned long long int var_9 = 14673021640016544359ULL;
unsigned long long int var_10 = 3721710892014556444ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)197;
unsigned short var_12 = (unsigned short)29458;
long long int var_13 = -7840732858560555178LL;
unsigned long long int var_14 = 8019759456645069950ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
