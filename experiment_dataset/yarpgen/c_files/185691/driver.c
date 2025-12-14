#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
unsigned short var_1 = (unsigned short)4610;
long long int var_2 = 4622609655262209996LL;
unsigned short var_3 = (unsigned short)44351;
int var_4 = -671457881;
unsigned long long int var_5 = 11053869671544215764ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 4639268814204017200LL;
int zero = 0;
short var_10 = (short)-9839;
signed char var_11 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
