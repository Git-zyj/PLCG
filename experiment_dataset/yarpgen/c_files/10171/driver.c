#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2569;
short var_2 = (short)-29351;
unsigned long long int var_3 = 10960276255842772292ULL;
signed char var_7 = (signed char)-10;
unsigned char var_9 = (unsigned char)150;
long long int var_15 = 8025071679272398415LL;
int zero = 0;
unsigned short var_17 = (unsigned short)19019;
unsigned short var_18 = (unsigned short)47264;
unsigned char var_19 = (unsigned char)234;
signed char var_20 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
