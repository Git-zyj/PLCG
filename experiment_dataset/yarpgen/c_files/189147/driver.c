#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25868;
unsigned long long int var_2 = 6694017907967456728ULL;
int var_3 = 1421296942;
unsigned char var_6 = (unsigned char)47;
unsigned char var_7 = (unsigned char)32;
unsigned char var_8 = (unsigned char)213;
signed char var_10 = (signed char)-124;
unsigned int var_11 = 683359402U;
int zero = 0;
int var_14 = -1445395721;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 855605353037344129ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
