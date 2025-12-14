#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9523;
int var_2 = -640648427;
short var_4 = (short)8197;
long long int var_7 = -6231138989064492720LL;
int var_11 = -988143557;
long long int var_12 = 2687538677652218949LL;
int var_14 = -863737851;
int zero = 0;
signed char var_15 = (signed char)-105;
unsigned char var_16 = (unsigned char)220;
short var_17 = (short)-24026;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
