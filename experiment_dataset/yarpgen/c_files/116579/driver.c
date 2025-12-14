#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9077820655688383269LL;
unsigned int var_1 = 2811775824U;
long long int var_2 = 5204839092750425324LL;
unsigned char var_3 = (unsigned char)4;
unsigned long long int var_4 = 13966531026547962079ULL;
long long int var_6 = -8238999400226799038LL;
unsigned short var_7 = (unsigned short)48593;
unsigned int var_8 = 4153598273U;
long long int var_9 = -9069922246565267804LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-85;
int var_12 = 29121315;
unsigned int var_13 = 345317088U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
