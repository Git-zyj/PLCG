#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7767744689746843756LL;
int var_1 = -1822556543;
short var_2 = (short)10898;
unsigned short var_3 = (unsigned short)26991;
unsigned long long int var_4 = 12770184581729902558ULL;
unsigned short var_5 = (unsigned short)34369;
signed char var_6 = (signed char)104;
unsigned long long int var_7 = 4265496433681997824ULL;
unsigned int var_8 = 3854864696U;
short var_9 = (short)-25126;
int zero = 0;
unsigned long long int var_10 = 3847651506553505666ULL;
unsigned long long int var_11 = 17939282335942200517ULL;
long long int var_12 = 6554462371409124467LL;
unsigned char var_13 = (unsigned char)169;
short var_14 = (short)-7242;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
