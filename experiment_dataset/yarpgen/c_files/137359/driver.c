#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
signed char var_2 = (signed char)-23;
long long int var_6 = -9191959297407372200LL;
_Bool var_8 = (_Bool)1;
int var_9 = -1530948549;
int zero = 0;
unsigned int var_10 = 3918864088U;
signed char var_11 = (signed char)117;
unsigned char var_12 = (unsigned char)156;
short var_13 = (short)27156;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
