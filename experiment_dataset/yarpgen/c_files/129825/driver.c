#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -389963466;
unsigned int var_1 = 2799086644U;
long long int var_2 = 8695448569660707668LL;
long long int var_7 = 5483337046605299646LL;
unsigned long long int var_11 = 13287731436593972286ULL;
long long int var_12 = 1472495072132469105LL;
short var_13 = (short)-10370;
unsigned short var_14 = (unsigned short)51448;
unsigned short var_15 = (unsigned short)63578;
int zero = 0;
unsigned int var_17 = 4281588184U;
unsigned int var_18 = 3198991012U;
signed char var_19 = (signed char)106;
void init() {
}

void checksum() {
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
