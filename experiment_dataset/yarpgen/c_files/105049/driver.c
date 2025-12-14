#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16144079227104413883ULL;
unsigned long long int var_1 = 6799870628720969751ULL;
unsigned long long int var_3 = 7079725467998335935ULL;
unsigned long long int var_5 = 4819813680998710561ULL;
unsigned long long int var_6 = 14290635026853957640ULL;
unsigned long long int var_7 = 6423359323661234644ULL;
unsigned long long int var_8 = 3536671820624845006ULL;
unsigned long long int var_9 = 17616968925162067905ULL;
unsigned long long int var_10 = 9612656716036052247ULL;
unsigned long long int var_14 = 13689241031982751023ULL;
unsigned long long int var_15 = 3408418087644059678ULL;
int zero = 0;
unsigned long long int var_16 = 2047650056682940696ULL;
unsigned long long int var_17 = 14824077165374797760ULL;
unsigned long long int var_18 = 10251084187383714947ULL;
unsigned long long int var_19 = 3386233486389373200ULL;
unsigned long long int var_20 = 1222291888636628557ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
