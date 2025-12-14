#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-118;
long long int var_3 = 7835395713210712317LL;
unsigned short var_4 = (unsigned short)31202;
int var_5 = 1927523716;
unsigned long long int var_7 = 12584977796303824721ULL;
unsigned short var_8 = (unsigned short)41177;
short var_10 = (short)-10781;
unsigned short var_11 = (unsigned short)44653;
int var_12 = -648264708;
int zero = 0;
unsigned long long int var_13 = 7702437846874023538ULL;
short var_14 = (short)8221;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4175942406669228768LL;
long long int var_17 = 18587175707966536LL;
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
