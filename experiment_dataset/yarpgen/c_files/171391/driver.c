#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7026;
signed char var_2 = (signed char)-15;
unsigned int var_3 = 2530901530U;
int var_7 = -769781296;
unsigned long long int var_11 = 14220569578049355974ULL;
long long int var_12 = -407280699417507789LL;
signed char var_13 = (signed char)93;
signed char var_17 = (signed char)110;
int zero = 0;
long long int var_19 = 4197328738975232721LL;
unsigned short var_20 = (unsigned short)51313;
void init() {
}

void checksum() {
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
