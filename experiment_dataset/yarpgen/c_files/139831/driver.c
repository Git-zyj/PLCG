#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10808223639085921292ULL;
signed char var_1 = (signed char)100;
unsigned long long int var_2 = 17224949830320396372ULL;
short var_3 = (short)-11766;
unsigned char var_5 = (unsigned char)47;
short var_6 = (short)-4353;
int var_7 = -942404316;
int var_8 = 553101117;
unsigned short var_9 = (unsigned short)48030;
int zero = 0;
unsigned int var_11 = 2333246270U;
signed char var_12 = (signed char)-71;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
