#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14632;
unsigned short var_1 = (unsigned short)3098;
unsigned long long int var_2 = 11252705339427340114ULL;
int var_3 = 1512002784;
short var_4 = (short)24090;
unsigned int var_5 = 3245211439U;
short var_7 = (short)26079;
long long int var_8 = 5284218083664056773LL;
int var_9 = -1957811229;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-1657;
int zero = 0;
short var_12 = (short)29392;
unsigned short var_13 = (unsigned short)61424;
short var_14 = (short)-21982;
long long int var_15 = 5743960041056454088LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
