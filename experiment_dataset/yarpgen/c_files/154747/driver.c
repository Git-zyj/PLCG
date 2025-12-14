#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17596040578977378892ULL;
unsigned long long int var_2 = 11557441652630889825ULL;
unsigned short var_7 = (unsigned short)35209;
signed char var_8 = (signed char)4;
unsigned char var_9 = (unsigned char)152;
int zero = 0;
unsigned char var_10 = (unsigned char)85;
short var_11 = (short)9473;
unsigned long long int var_12 = 12522750585767658384ULL;
signed char var_13 = (signed char)-113;
int var_14 = -1905157601;
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
