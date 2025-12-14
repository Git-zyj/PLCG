#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 673119757;
_Bool var_3 = (_Bool)1;
short var_7 = (short)-25980;
unsigned char var_11 = (unsigned char)43;
unsigned long long int var_17 = 6731749891963214222ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)89;
unsigned short var_19 = (unsigned short)54299;
unsigned char var_20 = (unsigned char)135;
_Bool var_21 = (_Bool)1;
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
