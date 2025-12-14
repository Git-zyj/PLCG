#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-44;
unsigned char var_1 = (unsigned char)208;
signed char var_2 = (signed char)-116;
signed char var_3 = (signed char)-38;
signed char var_4 = (signed char)-98;
signed char var_5 = (signed char)114;
int var_6 = -653837757;
signed char var_7 = (signed char)-57;
signed char var_8 = (signed char)21;
int var_9 = -16330671;
signed char var_10 = (signed char)-127;
long long int var_11 = -7607158227364255607LL;
signed char var_12 = (signed char)14;
int zero = 0;
unsigned char var_13 = (unsigned char)184;
unsigned char var_14 = (unsigned char)166;
int var_15 = 759383003;
signed char var_16 = (signed char)-126;
signed char var_17 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
