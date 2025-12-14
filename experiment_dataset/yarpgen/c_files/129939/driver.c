#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)60;
_Bool var_2 = (_Bool)0;
long long int var_4 = -7968853659376268941LL;
unsigned int var_5 = 4178575572U;
unsigned int var_6 = 4288960659U;
long long int var_7 = 9057744497113521300LL;
unsigned int var_8 = 2913667116U;
unsigned int var_9 = 11577796U;
signed char var_10 = (signed char)-52;
long long int var_11 = -7352570226158677807LL;
int zero = 0;
unsigned char var_12 = (unsigned char)211;
long long int var_13 = -1806604222048655634LL;
long long int var_14 = 3282482655633231710LL;
void init() {
}

void checksum() {
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
