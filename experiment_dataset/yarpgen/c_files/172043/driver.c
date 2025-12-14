#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7797319913858848470ULL;
unsigned short var_5 = (unsigned short)57055;
unsigned long long int var_6 = 3522140723361290207ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 10549339529018050932ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4465844053828720397ULL;
int zero = 0;
short var_14 = (short)-5203;
unsigned long long int var_15 = 3912066540980508704ULL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-82;
void init() {
}

void checksum() {
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
