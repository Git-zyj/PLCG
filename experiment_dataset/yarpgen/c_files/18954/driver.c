#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)111;
unsigned short var_6 = (unsigned short)49707;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)151;
unsigned int var_10 = 3232532348U;
unsigned short var_12 = (unsigned short)32814;
long long int var_13 = 2561031615012820067LL;
int zero = 0;
unsigned char var_15 = (unsigned char)159;
short var_16 = (short)8332;
long long int var_17 = -3117813345109255177LL;
unsigned int var_18 = 1937466282U;
int var_19 = -1706642868;
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
