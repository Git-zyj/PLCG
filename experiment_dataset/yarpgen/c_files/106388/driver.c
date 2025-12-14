#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7941786949103957192ULL;
unsigned int var_2 = 3327127737U;
unsigned long long int var_3 = 15523416150292381797ULL;
unsigned long long int var_7 = 10696889678332713240ULL;
short var_10 = (short)7483;
int zero = 0;
unsigned long long int var_19 = 6526099675607309088ULL;
unsigned char var_20 = (unsigned char)66;
short var_21 = (short)-24586;
unsigned char var_22 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
