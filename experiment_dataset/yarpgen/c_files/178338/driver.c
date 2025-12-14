#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14129776741223251238ULL;
int var_4 = -635112293;
unsigned short var_5 = (unsigned short)7483;
int zero = 0;
unsigned long long int var_15 = 13844342069083403822ULL;
signed char var_16 = (signed char)-127;
unsigned long long int var_17 = 114182478795954275ULL;
signed char var_18 = (signed char)-4;
int var_19 = -1402709207;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
