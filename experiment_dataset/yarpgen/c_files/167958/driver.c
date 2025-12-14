#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8494374042685895198LL;
unsigned char var_2 = (unsigned char)229;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)110;
long long int var_7 = -4706477231857469707LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4551797398121411534ULL;
unsigned short var_10 = (unsigned short)26821;
unsigned long long int var_11 = 13820960796616851207ULL;
long long int var_12 = 3691125365094498584LL;
unsigned short var_13 = (unsigned short)16424;
int var_14 = -1250847856;
int zero = 0;
unsigned short var_15 = (unsigned short)1712;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)56;
void init() {
}

void checksum() {
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
