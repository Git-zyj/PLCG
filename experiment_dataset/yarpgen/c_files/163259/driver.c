#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7489265262876318157ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_11 = 5498477333794248880ULL;
short var_13 = (short)-32145;
long long int var_16 = 7276869943509401376LL;
int zero = 0;
unsigned int var_19 = 2023941800U;
int var_20 = -2123160775;
unsigned short var_21 = (unsigned short)40643;
unsigned short var_22 = (unsigned short)25319;
unsigned long long int var_23 = 14642588325294427283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
