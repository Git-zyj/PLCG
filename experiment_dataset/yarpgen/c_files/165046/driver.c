#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12476;
short var_2 = (short)23835;
long long int var_3 = -5093703345345513466LL;
signed char var_4 = (signed char)-31;
unsigned int var_7 = 3665565642U;
unsigned long long int var_8 = 13580494187142024438ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -1828267078104804156LL;
unsigned char var_11 = (unsigned char)51;
unsigned char var_12 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
