#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4060463069U;
unsigned int var_1 = 1407227874U;
short var_2 = (short)5058;
unsigned long long int var_3 = 10179442631579685723ULL;
unsigned short var_4 = (unsigned short)23757;
int var_5 = 1281975099;
unsigned int var_6 = 3970296188U;
long long int var_7 = -5059402732172402612LL;
short var_9 = (short)23399;
int var_10 = 1514145430;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3574588204U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)63;
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
