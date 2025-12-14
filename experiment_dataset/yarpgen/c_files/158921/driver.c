#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2066067519945519184LL;
int var_2 = 531079513;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)220;
unsigned char var_7 = (unsigned char)130;
int zero = 0;
signed char var_10 = (signed char)104;
int var_11 = 1019980636;
unsigned long long int var_12 = 11321493904650849952ULL;
short var_13 = (short)-10243;
unsigned int var_14 = 680996539U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
