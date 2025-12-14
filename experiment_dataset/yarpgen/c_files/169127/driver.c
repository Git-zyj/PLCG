#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
unsigned long long int var_2 = 13772114358438846373ULL;
unsigned int var_3 = 734643970U;
unsigned short var_4 = (unsigned short)28811;
_Bool var_5 = (_Bool)0;
long long int var_8 = 5502370177885481023LL;
signed char var_9 = (signed char)4;
signed char var_11 = (signed char)-4;
unsigned long long int var_13 = 10092090745138853200ULL;
unsigned short var_15 = (unsigned short)37030;
int zero = 0;
signed char var_18 = (signed char)-5;
unsigned long long int var_19 = 10345088094103732723ULL;
int var_20 = -2031376221;
long long int var_21 = 7890355583744667814LL;
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
