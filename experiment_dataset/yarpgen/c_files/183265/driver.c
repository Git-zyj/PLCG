#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10349;
unsigned long long int var_4 = 3397542657765135394ULL;
unsigned long long int var_5 = 12835901099563225388ULL;
int var_8 = 1205465691;
unsigned char var_10 = (unsigned char)180;
int var_12 = 309473650;
int zero = 0;
unsigned short var_13 = (unsigned short)33072;
long long int var_14 = 3449089996806082745LL;
void init() {
}

void checksum() {
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
