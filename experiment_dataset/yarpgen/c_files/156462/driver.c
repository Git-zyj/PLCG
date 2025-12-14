#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21815;
signed char var_7 = (signed char)-69;
_Bool var_9 = (_Bool)1;
short var_11 = (short)10113;
long long int var_13 = 8918711102821763068LL;
int var_14 = -1728777676;
short var_18 = (short)-13617;
int zero = 0;
unsigned int var_20 = 3089153963U;
short var_21 = (short)9360;
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
