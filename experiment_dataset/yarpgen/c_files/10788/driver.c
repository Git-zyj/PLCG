#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -109401451;
unsigned long long int var_1 = 18363606370386495478ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)55;
long long int var_7 = -1938894724864626697LL;
short var_8 = (short)-25268;
unsigned int var_10 = 2643649353U;
int var_11 = 264035061;
short var_12 = (short)16129;
int var_14 = -1048008868;
signed char var_15 = (signed char)72;
short var_18 = (short)-16262;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3436512224486352260LL;
void init() {
}

void checksum() {
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
