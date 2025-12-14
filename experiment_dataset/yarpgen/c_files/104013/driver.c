#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)107;
unsigned short var_4 = (unsigned short)47018;
unsigned short var_6 = (unsigned short)31264;
signed char var_8 = (signed char)12;
signed char var_10 = (signed char)-28;
int zero = 0;
unsigned long long int var_18 = 14699915356919095778ULL;
unsigned long long int var_19 = 5022419158798093871ULL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)40843;
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
